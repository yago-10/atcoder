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
    ll N,K,S;
    cin >> N >> K >> S;

    for(ll i = 0; i<N ; i++){
        if(i < K){
            cout << S;
        }else if(S!=1000000000){
            cout << S+1;
        }else{
            cout << 1;
        }
        if(i != N-1)
            cout << ' ';
    }
    cout << endl;
    return 0;
}