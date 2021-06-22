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
    ll N,d[50],sum=0;

    cin >> N;
    REP(i,N){
        cin >> d[i];
    }

    REP(i,N){
        REP(j,N-i){
            if(j+i+1<N){
                sum += d[i]*d[j+i+1];
            }
        }
    }
    cout << sum << endl;

    return 0;
}