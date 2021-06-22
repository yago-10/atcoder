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
    string S,T,U;
    ll A,B;
    cin >> S >> T >> A >> B >> U;
    if(S == U){
        A--;
    }
    else if(T == U)
    {
        B--;
    }
    cout << A << ' ' << B << endl;

    return 0;    
}