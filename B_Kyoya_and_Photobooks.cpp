// _Paola Montserrat Osorio Garcia_
// B-Kyoya and Photobooks

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
    int n = 26, total=0, inicial=0;
    string lowercases;

    while(tc--){
        cin>>lowercases;
        inicial = lowercases.size();
        cout<<(n*(inicial+1))-inicial;
    }
return 0;
}