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
    int N,B[100000],ans,tmp;
    cin >> N;
    REP(i,N-1){
        cin >> B[i];
    }
    B[N-1] = INF;

    ans=0;
    REP(i,N){
        if(i>0 && B[i-1] < B[i]){
            tmp = B[i-1];
        }
        else{
            tmp = B[i];
        }
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}