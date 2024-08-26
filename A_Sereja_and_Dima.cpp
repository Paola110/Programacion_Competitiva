// _Paola Montserrat Osorio Garcia_
// https://codeforces.com/contest/381/problem/A

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

    int num_cards;
    int max = 0, min = 0;
    int Sere = 0, Dima = 0;

    while(tc--){
        cin>>num_cards;
        max = num_cards-1;
        int card_value[num_cards];

        for (int i = 0; i < num_cards; i++){
            cin>>card_value[i];
        }

        for (int i = 0; i < num_cards; i++){
            if (i%2 == 0){
                if(card_value[min]> card_value[max]){
                    Sere+=card_value[min];
                    min++;
                } else {
                    Sere+=card_value[max];
                    card_value[max] = 0;
                    max--;
                }
            } else {
                if(card_value[min]> card_value[max]){
                    Dima+=card_value[min];
                    min++;
                } else {
                    Dima+=card_value[max];
                    card_value[max] = 0;
                    max--;
                }
            }
        }

        cout << Sere << " " << Dima << endl;

    }
return 0;
}