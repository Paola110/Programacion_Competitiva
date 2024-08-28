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
        int posicion=0, posicion1=1, posicion2=1, posicion_final=0;

        for (int i = 0; i < palabra.size(); i++){

            posicion = letras.find(palabra[i])+1;
            posicion2 = posicion + posicion1;

            cout<<posicion1<<" ";

            if (posicion2 > 26){

                posicion_final += posicion2 - 26;
                posicion1 = posicion2-26;

            } else {
                posicion_final += posicion - posicion1;
                posicion1 = posicion-posicion1;
            }

            cout<<palabra[i]<<" "<<posicion_final<<endl;

        }
    }

return 0;
}