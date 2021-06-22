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
    ll A;
    cin >> A;
    if(A%2 == 1){
        cout << A/2+1<< endl;
    }
    else
    {
        cout << A/2<< endl;
    }

    return 0;    
}