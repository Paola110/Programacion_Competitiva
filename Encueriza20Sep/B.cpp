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

    int k,n,w;
    int res = 0;
    cin>>k>>n>>w;

    while(tc--){

        for (int i = 0; i < w; i++){
            res += ((i+1)*k);
        }
        if (res > n){
            res = n-res;
        } else {
            res = 0;
        }
        cout<<res<<endl;
    }
return 0;
}