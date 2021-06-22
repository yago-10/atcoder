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
    ll A[3][3],N,b[10];
    REP(i,3){
        REP(j,3){
            cin >> A[i][j];
        }
    }
    cin >> N;
    REP(i,N)
    {
        cin >> b[i];
    }
    int x=0;
    REP(i,3){
        REP(j,3){
                REP(k,10){
                    if(A[j][i]==b[k]){
                        x++;
                        break;
                    }
                }
            if(x==3){
                cout << "Yes" << endl;
                return 0;
            }
        }
    x=0;
    }
    REP(i,3){
        REP(j,3){
                REP(k,10){
                    if(A[i][j]==b[k]){
                        x++;
                        break;
                    }
                }
            if(x==3){
                cout << "Yes" << endl;
                return 0;
            }
        }
    x=0;
    }
    REP(j,3){
       REP(k,10){
            if(A[j][j]==b[k]){
                x++;
                break;
            }
        }
        if(x==3){
            cout << "Yes" << endl;
            return 0;
        }
    }
    x=0;
    REP(j,3){
       REP(k,10){
            if(A[j][2-j]==b[k]){
                x++;
                break;
            }
        }
        if(x==3){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;    
}