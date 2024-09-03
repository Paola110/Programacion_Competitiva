// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/732/problem/A

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
    int costo = 0, moneda = 0, cont = 1, terminar = false;
    cin>>costo>>moneda;

    while(tc--){
        while(!terminar){
            if ( (((costo*cont)%10)==0)||(((costo*cont) - moneda)%10)==0){
                terminar = true;
            } else {
                cont++;
            }
        }
        cout<<cont;
    }
return 0;
}