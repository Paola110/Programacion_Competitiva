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

    string n;

    while(tc--){

        cin>>n;
        int num = n[0] - '0';
        num = num *10 + (n[1] - '0');
        bool flag= false;
        if(num==0){n[0]='1';n[1]='2';num=12;flag=true;}

        if(num>12){
            string r= to_string(num-12);
            if(r.size()== 1){
                r= '0' + r;
            }
            n[0]=r[0];
            n[1]=r[1];
            if(n.size()<5){
                string m= '0' + n;
                cout<<m<<" PM"<<endl;
            }else{
                cout<<n<<" PM"<<endl;
                }
        }else if(num==12&& flag){
            cout<<n<<" AM"<<endl;
        }else if(num==12 && !flag){
            cout<<n<<" PM"<<endl;
        }else if(num<12){
                cout<<n<<" AM"<<endl;

        }

       /*
       cin >> n;
       if(n[0] == '1' && n[1] > '2'){
            if(n[0] > '1' && n[1] > '1'){
                n[0]--;
                n[1] -=2;
            } else if()
       } else {
        cout << n << " AM";
       }
       */
    }
return 0;
}