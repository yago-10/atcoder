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
    ll N, ans=0;
    string S;
    char c='0';

    cin >> N;
    cin >> S;

    REP(i,N){
        if(S[i] != c){
            ans++;
            c=S[i];
        }
    }
    cout << ans << endl;

    return 0;
}