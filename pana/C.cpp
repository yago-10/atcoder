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
    ll a,b,c;
    cin >> a >> b >> c;

    if((a+b-c)*(a+b-c) > 4*a*b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;    
}