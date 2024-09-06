// _Paola Montserrat Osorio Garcia_
// E - Prefiquence

#pragma GCC optimize("Ofast,unroll-loops")//-0.0+0.0=-0
#pragma GCC target("avx2")
#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using namespace std;
#define endl '\n'
#define dbg(...) cerr<<"LINE("<<__LINE__<<")->["<<#__VA_ARGS__<<"]: ["<<(__VA_ARGS__)<<"]\n";
#define pb push_back
#define F first
#define S second

int main(){
//ios::sync_with_stdio(0);cin.tie(0);
//freopen("in.txt", "r", stdin);
    int tc=1;
    int t=0, n=0, m=0, cont=1;
    string a, suba="", b;
    bool sigue = true;

    while(tc--){
        cin>>t;
        int res[t];
        for (int i=0; i<t; i++){
            cin>>n>>m>>a>>b;
            while (sigue){
                suba = a.substr(0,cont);
                if ((b.find(suba)>=0) && (b.find(suba)<n)){
                    cont++;
                } else {
                    sigue = false;
                }
                if (cont == n){
                    sigue = false;
                }
            }
            cout<<cont;
            res[i]= cont;
            sigue = true;
        }

        for (int j=0; j<t; j++){
            cout<<res[j]<<endl;
        }

    }
    return 0;
}