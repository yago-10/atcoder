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
    int N,K,eval;
    char S[100000];
    cin >> N >> K >> S;
    
    eval = 0;
    REP(i,N){
        if(S[i] == S[i+1]){
            eval++;
        }
    }

    cout << min(N-1, eval+2*K) << endl;


    return 0;
}