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
    ll K,N,A=0,B=0,sum=0,max=0,f=0;
    cin >> K>>N;
    REP(i,N){
        cin >> A;
        if(i==0){
            f=A;
        }
        sum+=A-B;
        if(A-B>max){
            max=A-B;
        }
        B=A;
    }
    if(K-A+f>max){
        max=K-A+f;
    }
    cout << sum+(K-A)-max << endl;
    return 0;    
}