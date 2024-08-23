// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/112/problem/A

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

    string primera_string, segunda_string;

    while(tc--){
        cin>>primera_string>>segunda_string;

        for (int i = 0; i < primera_string.size(); i++){
            primera_string[i] = tolower(primera_string[i]);
        }
        for (int i = 0; i < segunda_string.size(); i++){
            segunda_string[i] = tolower(segunda_string[i]);
        }

        if (primera_string < segunda_string){
            cout<<"-1"<<endl;
        }
        else if (primera_string > segunda_string){
            cout<<"1"<<endl;
        }
        else if (primera_string == segunda_string){
            cout<<"0"<<endl;
        }

    }
return 0;
}