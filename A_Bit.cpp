// _Paola Montserrat Osorio Garcia_
// A-Bit++

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
    int n, cont=0;
    string plus="++";
    string less="--";
    string statement;

    while(tc--){
        cin>>n;
        for (int i=0; i<n; i++){
            cin>>statement;
            if((statement.find(plus))!=-1){
                cont++;
            } else if((statement.find(less))!=-1){
                cont--;
            }
        }
        cout<<cont;

    }
return 0;
}