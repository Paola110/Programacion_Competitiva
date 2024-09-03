// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/228/problem/A

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

    set <int> shoes;
    int color = 0;

    while(tc--){
        for (int i=0; i<4; i++){
            cin>>color;
            shoes.insert(color);
        }
        cout<<4-shoes.size();
    }
return 0;
}