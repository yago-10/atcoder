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
    string S;
    cin >> S;

    int h = S.size()/2,x;
    if(S.size()%2==1){
        x=1;
    }else{
        x=0;
    }
    string Sx = S;
    reverse(Sx.begin(),Sx.end());
    
    if(S==Sx){
        string S1 = S.substr(0,h);
        string S1x = S1;
        reverse(S1x.begin(),S1x.end());
        if(S1==S1x){
            string S2 = S.substr(h+x,h);
            string S2x = S2;
            reverse(S2x.begin(),S2x.end());
            if(S2==S2x){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            cout<<"No"<<endl;
        }
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}