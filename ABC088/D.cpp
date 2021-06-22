#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int dx[4] = { 0, 1, 0, -1 }, dy[4] = { -1, 0, 1, 0 };

int H,W;
char s[55][55];
int dp[55][55];

int bfs(){
    queue<pair<int,int>> que;
    memset(dp, -1, sizeof(dp));
    que.push({0,0});
    dp[0][0] = 1;
    int x,y;
    while(!que.empty()){
        tie(x,y) = que.front();
        que.pop();

        if (x == W - 1 and y == H - 1) return dp[y][x];
        REP(i,4){
            int xi = x + dx[i];
            int yi = y + dy[i];
            if (0 <= xi && xi < W && 0 <= yi && yi < H){
                if(s[yi][xi] == '.' && dp[yi][xi] == -1){
                    dp[yi][xi] = dp[y][x] + 1;
                    que.push({xi,yi});
                }
            }
        }
    }
    return -1;
}

int main()
{
    cin >> H >> W;

    int b = 0;
    REP(i,H){
        REP(j,W){
            cin >> s[i][j];
            if(s[i][j] == '#'){
                b++;
            }
        }
    }
    
    int ans = bfs();
    if(ans != -1){
        cout << H*W-b - ans << endl;
    }else{
        cout << ans << endl;
    }

    return 0;
}