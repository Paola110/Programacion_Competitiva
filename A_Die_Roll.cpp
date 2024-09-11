// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/9/problem/A

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

    int y_yakkos, w_wakkos, prob=6, dice=6;


    while(tc--){
        cin>>y_yakkos>>w_wakkos;

        if(y_yakkos > w_wakkos){
            prob = prob - y_yakkos+1;
        } else {
            prob = prob - w_wakkos+1;
        }

        if (prob == 6){
            prob/=6;
            dice=1;
        } else if (prob%3==0){
            prob/=3;
            dice/=3;
        } else if (prob%2==0){
            prob/=2;
            dice/=2;
        } else if ( prob == 0){
            dice=1;
        }

        cout<<prob<<"/"<<dice;

    }
return 0;
}