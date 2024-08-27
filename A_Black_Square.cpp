// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/431/problem/A

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

    int Calorias[4];
    string Teclas;
    int Calorias_Totales=0;

    while(tc--){
        for(int i=0; i<4; i++){
            cin>>Calorias[i];
        }
        cin>>Teclas;

        for(int i=0; i<Teclas.size(); i++){
            char Tecla = Teclas[i];
            switch (Tecla){
                case '1':
                    Calorias_Totales += Calorias[0];
                    break;
                case '2':
                    Calorias_Totales += Calorias[1];
                    break;
                case '3':
                    Calorias_Totales += Calorias[2];
                    break;
                case '4':
                    Calorias_Totales += Calorias[3];
                    break;
                default:
                    break;
            }
        }
        cout<<Calorias_Totales;
    }
return 0;
}