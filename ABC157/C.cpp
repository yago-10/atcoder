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
    ll N,M,s[5],c[5];
    char a[3];
    cin >> N >> M;
    REP(i,N){
        a[i] = '0';
    }
    REP(i,M){
        cin >> s[i] >> c[i];
        if(s[i]<=N && (a[s[i]-1]=='0'||a[s[i]-1]=='0'+c[i])){
            a[s[i]-1] = '0'+c[i];
        }else{
            cout << -1 << endl;
            return 0;
        }
        if((s[i] == 1 && c[i] == 0) && N>1){
            cout << -1 << endl;
            return 0;

        }
    }
    if(a[0]=='0'){
            cout << -1 << endl;
            return 0;

    }
    REP(i,N){
        cout << a[i];
    }
    cout << endl;


    return 0;    
}