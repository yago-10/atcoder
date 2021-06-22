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
    ll N,K,Q,A[100000],P[100000];
    cin >> N >> K >> Q;
    memset(P, 0, sizeof(P));
    REP(i,Q){
        cin >> A[i];
        P[A[i]-1]++;
    }
    REP(i,N){
        if(K+P[i]-Q > 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}