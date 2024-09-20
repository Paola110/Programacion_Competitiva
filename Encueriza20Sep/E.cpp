// _Paola Montserrat Osorio Garcia_
// link y/o nombre del programa

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

    int t, x, y, k, mox = 0, moy = 0, pox=0, poy=0, mov = 0;
    cin>>t;
    bool target = false

    while(tc--){

        for ( int i = 0; i<t; i++){
            cin>>x>>y>>k;
            mox = k; moy = k;

            while (!target){
                if ((pox+mox)<=x) && (poy+moy)<=y)
            }
        }
        
    }
return 0;
}