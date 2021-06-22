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
    int N, v[50];
    double ans;
    cin >> N;
    REP(i,N){
        cin >> v[i];
    }

    sort(v, v+N);
    
    ans = v[0];
    REP(i,N-1){
        ans = (ans + v[i+1])/2;
    }
    cout << ans << endl;

    return 0;
}