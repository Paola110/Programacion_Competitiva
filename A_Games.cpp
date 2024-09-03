// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/268/problem/A

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
ios::sync_with_stdio(0);cin.tie(0);
//freopen("in.txt", "r", stdin);
    int tc=1;
    //cin>>tc;
    int num_jueg, cont=0;
    cin>>num_jueg;
    int colores_local[num_jueg], colores_invitado[num_jueg];

    while(tc--){
        for (int i=0; i<num_jueg; i++){
            cin>>colores_local[i];
            cin>>colores_invitado[i];
        }
        for (int i=0; i<num_jueg; i++){
            for (int j=0; j<num_jueg; j++){
                if (colores_local[i]==colores_invitado[j]){
                    cont++;
                }
            }
        }
        cout<<cont;
    }
return 0;
}