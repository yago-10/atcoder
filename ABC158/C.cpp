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
    ll A,B;
    cin >> A >> B;
    int ANS = -1;
    REP(i,1001){
        int a = i*0.08;
        int b = i*0.1;
        if(a == A && b == B){
            ANS = i;
            break;
        }
    }
    cout <<ANS<<endl;

    return 0;    
}