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
    string ans = "Yes";

    REP(i,S.length()){
        if(i%2 == 0 && S[i] == 'L'){
            ans ="No";
            break;
        }
        else if(i%2 == 1 && S[i] == 'R'){
            ans ="No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}