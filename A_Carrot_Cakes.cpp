// _Paola Montserrat Osorio Garcia_
// link y/o nombre del programa

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

    int n,t,k,d;
    int uno, dos,pasteles_tot = 0, vueltas1 = 0, vueltas2 = 0;



    while(tc--){
        cin>>n>>t>>k>>d;
        pasteles_tot = n;

        while(pasteles_tot < n){
            pasteles_tot += k;
            vueltas1++;
        }
        pasteles_tot = n;
        
        while(pasteles_tot < n){
            pasteles_tot += (k*2);
            vueltas2++;
        }

        uno = t*vueltas1;

        dos = (t*vueltas2) + d;

        cout<<uno<<endl<<dos<<endl;

        if (uno < dos){
            cout<<"NO";
        } else {
            cout<<"YES";
        }

    }
return 0;
}