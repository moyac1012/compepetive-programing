#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    string S;
    cin >> S;
    deque<char> dq;
    rep(i,S.size()){
        dq.push_back(S[i]);
    }
    ll Q;
    cin >> Q;
    int t;
    bool rev = false;
    rep(i,Q){
        cin >> t;
        if(t == 1){
            if(rev == false) rev = true;
            else rev = false;
        }
        if(t == 2){
            int F;
            char C;
            cin >> F >> C;
            if(F == 1){
                if(rev == false){
                    dq.push_front(C);
                }else{
                    dq.push_back(C);
                }
            }else{
                if(rev == false){
                    //S = S + C;
                    dq.push_back(C);
                }else{
                    //S = C + S;
                    dq.push_front(C);
                }
            }
        }
    }
    size_t dsize = dq.size();
    if(rev == true) {
        rep(i,dsize){
            cout << dq.back();
            dq.pop_back();
        }
    }else{
        rep(i,dsize){
            cout << dq.front();
            dq.pop_front();
        }
    }
    cout << endl;
        
}