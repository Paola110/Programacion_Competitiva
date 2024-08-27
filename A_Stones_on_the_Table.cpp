// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/266/problem/A

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

    int num_stones = 0, jumps = 0;

    while(tc--){
        cin>>num_stones;
        char stones[num_stones];

        for (int i=0; i<num_stones; i++){
            cin>>stones[i];
        }

        for (int i=0; i<num_stones; i++){
            if ((stones[i] == stones[i+1]) && (i+1<num_stones)){
                jumps++;
            }
        }
        cout<<jumps<<endl;
    }
return 0;
}