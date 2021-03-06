
# 競プロ勉強日誌

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