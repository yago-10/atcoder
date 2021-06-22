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
    ll N,ans = 0;

    cin >> N;
    REPR(i,9){
        if(N%i == 0){
            if(N/i > 10){
            }
        }
    }
    if(ans == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}