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
    ll H,W,A,B;
    cin >> H >> W >> A >> B;
    if(H/2<B || W/2<A){
        cout << "No" << endl;
        return 0;
    }

    REP(i,H){
        REP(j,W){
            if(((A-j+i)>0 && j>=i) || i-(W-A)>j){
                cout << '1';
            }else{
                cout <<'0';
            }
        }

        cout << endl;
    }
    return 0;
}