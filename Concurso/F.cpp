// _Paola Montserrat Osorio Garcia_
// link y/o nombre del programa
#pragma GCC optimize("Ofast,unroll-loops")//-0.0+0.0=-0
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

    ull x, c, price =0;
    cin>>x>>c;
    bool cost = true;

    vector<ull>a(x);

        for (ull i=0; i<x; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        while (cost){
            for(ull i=0; i<x; i++){
                price += a[i] + (x * (i+1));
            }
            if (price > c){
                price =0;
                x--;
            } else {
                cost = false;
            }
        }

        cout<<x<<" "<<price<<endl;


return 0;
}