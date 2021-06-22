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
    int tmp;
    ll ans = 0;
    ll num = stoll(S);
    REP(i,1<<(S.size()-1)){
        tmp = 0;
        REP(j,S.size()){
            if((i>>j) %2 == 1 || j == S.size()-1){
                ans += num % ll(pow(10,j+1)) / ll(pow(10,tmp));
                tmp = j+1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}