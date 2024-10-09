// _Paola Montserrat Osorio Garcia_
// link y/o nombre del programa

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
    cin>>tc;

    int n, k, numero;
    vector <int> a;
    vector <int> b;

    while(tc--){
        cin>>n>>k;

        for (int i = 0; i<n; i++){
            cin>>numero;
            a.push_back(numero);
        }

        for (int i = 0; i<n; i++){
            cin>>numero;
            b.push_back(numero);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i<n; i++){
            cout<< "A "<< a[i]<<endl;
        }
        for (int i = 0; i<n; i++){
            cout<< "B "<< b[i]<<endl;
        }

        cout<< b[n]<< " com "
        while (b[n]>a[n] && k>0){
            swap(a[n], b[n]);
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for (int i = 0; i<n; i++){
                cout<< "A "<< a[i]<<endl;
            }
            for (int i = 0; i<n; i++){
                cout<< "B "<< b[i]<<endl;
            }
            k--;
        }

        int res = 0;
        for (int i=0; i<n; i++){
            cout<<a[i]<<endl;
            res += a[i];
        }
        cout<<res<<endl;
    }
return 0;
}