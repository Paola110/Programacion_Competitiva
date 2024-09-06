// _Paola Montserrat Osorio Garcia_
// C - Evaluating Linear Expressions

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
    int a=0, b=0, k=0;

    while(tc--){
        cin>>a>>b>>k;

        for (int i=1; i<=k; i++){
            cout<<(a*i)+b<<" ";
        }
    }
return 0;
}