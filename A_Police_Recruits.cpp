// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/427/problem/A

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

    int num_crimenes=0,crimen=0, criminales=0, policias=0;

    while(tc--){
        cin>>num_crimenes;
        for(int i=0; i<num_crimenes; i++){
            cin>>crimen;

            if (crimen > 0){
                policias+=crimen;
            } else {
                criminales+= crimen;
                if (policias > 0){
                    policias--;
                    criminales++;
                }
            }
        }
        cout<<abs(criminales);
    }
return 0;
}