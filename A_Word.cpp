// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/59/problem/A

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

    char palabra[100];
    int n=0, min=0, may=0;

    while(tc--){
        cin>>palabra;
        n = strlen(palabra);
        for (int i = 0; i < n; i++){
            if (palabra[i] >= 'a' && palabra[i] <= 'z'){
                min++;
            }
            else if (palabra[i] >= 'A' && palabra[i] <= 'Z'){
                may++;
            }
        }

        if (may>min){
            for (int i = 0; i < n; i++){
                palabra[i] = toupper(palabra[i]);
            }
        } else {
            for (int i = 0; i < n; i++){
                palabra[i] = tolower(palabra[i]);
            }
        }
        cout<<palabra<<endl;
    }
return 0;
}