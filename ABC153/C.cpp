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
    ll N,K,sum=0,a;
    vector<ll> H;
    cin >> N >> K;
    REP(i,N){
        cin >>a;
        H.push_back(a);
        sum = sum + a;
    }
    std::sort(H.begin(),H.end(),greater<ll>());
    REP(i,K){
        sum = sum - H[i];
    }
    cout << sum << endl;

    return 0;
}