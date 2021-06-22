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
    char S[3],T[3];
    int ans = 0;
    cin >> S >> T;
    REP(i,3){
        if (S[i] == T[i]){
            ans++;
        } 
    }
    cout << ans << endl;

    return 0;
}