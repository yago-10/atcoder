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
    int N,cnt=0;
    string A,B;
    char tmp;
    cin >> N;
    for(int i=1; i<=N/2; i++){
        A = std::to_string(i);
        for(int j = 1; j<=N; j++){
            B = std::to_string(j);
            if(B[B.length()-1]==A[0] && B[0] == A[A.length()-1]){
                cout << A << ' ' << B << endl;
                cnt++;
                if(A!=B){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;    
}