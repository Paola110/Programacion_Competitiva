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
    int a=0, b=0, n=0, maximo=0, comparar=0, cont=0;

    while(tc--){
        cin>>a>>b>>n;

        while (n>0){
            if (cont%2==0){
                comparar = a;
            } else {
                comparar = b;
            }
            maximo = __gcd(comparar,n);
            if ((n-maximo) >= 0){
                cont++;
            }
            n= n - maximo;
        }

        if (cont%2!=0){
            cout<<0;
        } else {
            cout<<1;
        }

    }
    return 0;
}