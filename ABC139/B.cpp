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
    int A,B,ans,tap;
    ans = 0;
    tap = 1;
    cin >>A>>B;
    REP(i,B){
        if(B<=tap){
            break;
        }
        ans++;
        tap = 1+ans*(A-1);
    }
    cout << ans << endl;
    return 0;
}