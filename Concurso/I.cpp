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
    int n,a,b;
    cin>>n>>a>>b;
    if(a==b){
        cout<< fixed << setprecision(5) << (double)n;
        return 0;
    }
    double r=(double)(1.0);
    double med = (double)((b+a)/2);

    for(int i=a;i<b;++i){
        double sum = (i/2)*(2*a+(i-1));
        r += (double)(sum);
    }
    cout<< fixed << setprecision(5) << r;


return 0;
}