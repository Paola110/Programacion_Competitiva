// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/731/problem/A

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

    string palabra;
    string letras = "abcdefghijklmnopqrstuvwxyz";//26

    while(tc--){
        cin>>palabra;
        int distancia1 = 0, distancia2 = 0, indice1 = 0, indice2 = 0, suma_distancias = 0 ;
        for (int i=0; i<palabra.size() ; i++){
            indice2 = letras.find(palabra[i]);
            distancia1 = abs(indice1-indice2);
            distancia2 = letras.size() - distancia1;
            indice1 = indice2;
            if ( distancia1 < distancia2){
                suma_distancias += distancia1;
            } else {
                suma_distancias += distancia2;
            }
        }
        cout<<suma_distancias;
    }

return 0;
}