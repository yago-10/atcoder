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
    int H,N,A[100000],sum=0;
    cin >> H >> N;
    REP(i,N){
        cin >>A[i];
        sum = sum+A[i];
    }
    if(H>sum){
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;    
}