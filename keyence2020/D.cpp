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
    int N;
    cin >> H >> W >> N;
    if(H>W){   
        ANS = N/H;
        if(N%H>0){
            ANS++;
        }
    }else{
        ANS = N/W;
        if(N%W>0){
            ANS++;
        }
    }
    cout << ANS << endl;
    return 0;
}