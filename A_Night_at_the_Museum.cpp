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
    int vueltas=0, posicion=0, indice=0, posicion_anterior=0;
    string letras = "abcdefghijklmnopqrstuvwxyz";//25

    while(tc--){
        cin>>palabra;
        for (int i = 0; i < palabra.size(); i++){
            indice = letras.find(palabra[i]);

            cout<<indice<<" "<< posicion_anterior<<" ";

            posicion = indice+posicion_anterior;

            if (posicion>=25){
                posicion -= 24;
            }

            cout<<posicion<<" ";

            cout<<endl;

            posicion_anterior = indice;
            vueltas += posicion;
        }
        cout<<endl<<vueltas;
    }
return 0;
}