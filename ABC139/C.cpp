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
    int num,ans,move;
    int H[100000];
    cin >> num;
    REP(i,num){
        cin >> H[i];
    }
    ans=0;
    move=0;
    REP(i,num-1){
        if(H[i]>=H[i+1]){
            move++;
        }else{
            if(move > ans){
                    ans=move;
            }
            move=0;
        }

    }
    if(move > ans){
        ans=move;
    }
    cout << ans << endl;
    return 0;
}