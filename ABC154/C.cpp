#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll N, a, A[200000];
    string ans = "YES";
    cin >> N;
    for(ll i = 0; i < N; i++){
        cin >> a;
        for(ll j = 0; j < i; j++){
            if(A[j] == a){
                ans = "NO";
                break;
            }
        }
        if(ans == "NO"){
            break;
        }
        A[i] = a;
    }
    cout << ans << endl;

    return 0;    
}