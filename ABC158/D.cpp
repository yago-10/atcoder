#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
    string S,X,Y,C,TS,ES;
    ll Q,T,TX=0,F;
    cin >> S >>Q;
    REP(i,Q){
        cin >> T;
        if(T ==1){
            TX += 1;
        }else{
            cin >> F >> C;
            if((F+TX) % 2 ==1){
                TS = TS+C;
            }else{
                ES = ES + C;
            }
        }
    }
    if(TX%2 == 1){
        string tmp;
        tmp = TS;
        TS = ES;
        ES= tmp;
        reverse(S.begin(), S.end()); 
    }
    reverse(TS.begin(), TS.end()); 
    cout <<TS <<S<< ES<<endl;
 
    return 0;    
}