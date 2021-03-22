# 競プロ勉強日誌

[toc]



## ユークリッドの互除法

- 入力：整数 a, b
- 出力：**aとbの最大公約数**

``` c++
int gcd(int a,int b){
    if(a < b) swap(a, b);
    while(a%b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}
```

- aとbの大小関係は気にしなくていい
- 入力の整数のうち小さい方の桁数を$d$とした時に計算量$O(d)$回の除算で計算が終わる。桁数$ｄ$は$O(\log n)$なので計算量は$O(\log n)$

2021/3/5　追記　再帰で書いたほうが早い

```c++
int gcd(int a,int b){
  	if(a < b) swap(a, b);	
		if(b == 0) return a;
		return gcd(b,a%b);
}
```



### 最小公倍数

- 整数a,bの最大公約数を$gcd(a, b)$とした時、最小公倍数$lcm(a, b)$は、
  $$
  lcm(a, b) = \frac{ab}{gcd(a, b)}
  $$
  と表せる。よって最小公倍数もユークリッドの互除法を用いて求められる。

  ```c++
  int lcm(int a, int b){
      return (a*b)/gcd(a, b);
  }
  ```

#### Overflow を避ける

- 上のコードだとa、bが非常に大きい時に、Overflowが起きることがあるので

  ```c++
  int lcm(int a, int b){
      return (a/gcd(a, b))*b;
  }
  ```

  で解決できる。

### 整数除算の切り上げ

- $\frac{a}{b}$の切り上げは一般に$\frac{a+b-1}{b}$を整数で計算することで得られる。 

  

## 全探索

### bit探索

[Qiita - bit全探索について簡単にまとめる](https://qiita.com/hareku/items/3d08511eab56a481c7db)

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 3;

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}
```

標準出力：

```C++
0: {}
1: {0 }
2: {1 }
3: {0 1 }
4: {2 }
5: {0 2 }
6: {1 2 }
7: {0 1 2 }
```

- **`(1<<n)`**は$2^n$のこと。なので最初のfor文は合計$2^3=8$回る。
- **`　if( bit & (1<<i) )`**bitの中に`i`が含まれるかを判定をするANDの役割

## 範囲の全探索（？）

こういう状況の時を考えてる。$x_1$から$x_n$までは昇順または降順に並んでるとする。

<img src="/Users/tamoriyuuto/compepetive-programing/Study-document/img/zentansaku_hani.png" alt="zentansaku_hani" style="zoom:50%;" />

一つの幅を`k`とするとき、探索するべき幅の数は`n-k+1`個になる。
昇順・降順だから、`x[i]`から`x[i+k-1]`までの値の幅は間の値によらず、`x[i+k-1]-x[i]`で求めることができる。

## 制約が小さいときは全探索を疑え！！！！！！！！！！！！！！！！！！１

タイトルの通りです。[ARC114 A問題](https://atcoder.jp/contests/arc114/tasks/arc114_a)から。（ここでは`bit探索`）

## 整数から整数への関数

[ARC114 B問題](https://atcoder.jp/contests/arc114/tasks/arc114_b)

- 整数から整数への関数は**グラフ**(`functional graph`)で考える！！

$S \in \mathbb{N}$で写像$f:S \rightarrow S$を考える。この時、$T\subseteq S, T \not = \phi , f:T \rightarrow T$が全単射になるようなものはいくつあるかという問題（あってるか怪しい）。

こういう整数から整数への関数を考えるときはグラフにするといい。(`functional graph`と呼ばれる形になる)。

今回の問題では、全単射を満たすためには選ぶ節点はサイクルになってなくてはならない。また、`functional graph`ではサイクル数は**弱連結成分数**に等しいため、サイクル数を数えるには無向グラフとして考えて探索アルゴリズムを走らせればいい（サイクルを判定するアルゴリズムはちょっと面倒らしい）。

サイクル数を$C$とすると、そのサイクルを選ぶか選ばないかの2通りなので答えは$2^C-1$で求まる。

## 深さ優先探索

### 無向グラフの連結成分数

- 再帰での実装。これは無向グラフの`連結成分数`を数えている。

```c++
vector<bool> seen;	//節点vを訪問したかどうかを記憶する配列
void dfs(Graph &G, int v){
    seen[v] = true;	//入力節点vを訪問済みにする
    for(auto next_v : G[v]) {		//すべてのvに隣接している節点について
        if(seen[next_v]) continue;	//すでに探索済みだったらスルー
        dfs(G, next_v);		//それ以外で、その点からdfsを始める
    }
}
int main(){
   int n, m; 
   cin >> n >> m;
	 Graph G(n);
    rep(i,n){
        G[b].push_back(a);
        G[a].push_back(b);
    }

    seen.assign(n, false);	//seen配列をfalseで初期化
    int cnt = 0;
    for(int v = 0; v < n; v++){		//すべての節点からdfsを行う
        if(seen[v]) continue;		//訪問済みならスルー
        dfs(G, v);　//dfs
        cnt++;	　//dfsが終わったら連結成分数を一個足す
    }
}
```

### グリッドグラフの迷路問題

```c++
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int h, w;
vector<string> maze;

bool seen[510][510] = {};
void dfs(int sh, int sw){ //sh, swはスタート地点
    seen[sh][sw] = 1;	//訪れたところをtrueにする

    for(int i = 0;i < 4; i++){
        int nh = sh + dx[i];
        int nw = sw + dy[i];	//4方向全てについて

        if(nh < 0 || nw < 0 || nh >= h || nw >= w) continue;		//壁外
        if(maze[nh][nw] == '#') continue;		//壁
        if(seen[nh][nw] == 1) continue;			//訪問済み

        dfs(nh, nw);
    }
}

int main(){
    cin >> h >> w;
    maze.resize(h);
    rep(i,h) cin >> maze[i];
    int sh, sw, gh, gw;
    rep(i,h)rep(j,w){
        if(maze[i][j] == 's') sh = i, sw = j;		//スタートの特定
        if(maze[i][j] == 'g') gh = i, gw = j;		//ゴールの特定
    }

    dfs(sh, sw);

    if(seen[gh][gw] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
```

## 木DP

- 各頂点の根からの距離（深さ）
- 各頂点の部分木サイズ（部分木に含まれる頂点数）

を求める。

深さは再帰関数に深さの情報を追加することで求める。
具体的には、dfsを一回再帰するごとに引数で渡す深さ`d`を1増やす。

部分木サイズは、

- (`v`を根とする部分木サイズ) = (`v`の子の部分木サイズの**総和**)+1

で求められる。逆に言えば`v`の部分木サイズを求めるには、`v` の**全ての子についての部分木サイズがわかっている必要がある。**そのため、**帰りがけ**に計算を行う。

```c++

```



# スクショの場所変更

```bash
defaults write com.apple.screencapture location ~/(保存先dir)/;killall SystemUIServer
```

## 