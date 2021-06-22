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
    ll L;
    cin >> L;
    long double A = (long double)L/3*(long double)L/3*(long double)L/3;
    cout << fixed << setprecision(15) << A << endl;
    return 0;    
}