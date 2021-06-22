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
    ll X,a,b;
    cin >> X;
    a = X/500;
    b = (X-a*500)/5;
    cout << a*1000+b*5 << endl;
    return 0;    
}