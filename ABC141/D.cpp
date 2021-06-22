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
    ll N,M;
    priority_queue<ll> que;
    cin >> N >> M;
    REP(i,N){
        ll tmp;
        cin >> tmp;
        que.push(tmp);
    }
    REP(i,M){
        if(que.top() == 0){
            break;
        }
        ll tmp = que.top();que.pop();
        tmp = tmp/2;
        que.push(tmp);
    }
    ll ans = 0;
    REP(i,N){
        ans += que.top();que.pop();
    }
    cout << ans << endl;
    return 0;
}