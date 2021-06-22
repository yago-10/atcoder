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
    int N,ans;
    int A[20],B[20],C[20];

    cin >> N;
    REP(i,N){
        cin >> A[i];
    }
    REP(i,N){
        cin >> B[i];
    }
    REP(i,N-1){
        cin >> C[i];
    }
    ans=0;

    REP(i,N){
        ans += B[A[i]-1];
        if(i < N-1 && A[i+1] == A[i]+1){
            ans+=C[A[i]-1];
        }
    }
    cout << ans << endl;
    return 0;
}