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
    ll N,A;
    cin >> N;
    vector<pair<ll, ll> > pairs;
    REP(i,N){
        cin >> A;
        pairs.push_back(make_pair(A,i+1));
    }
    sort(pairs.begin(),pairs.end());
    REP(i,N){
        cout << pairs[i].second << endl;
    }

    return 0;
}