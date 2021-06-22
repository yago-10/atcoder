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
    ll N,X,L,robo=0;
    vector<tuple<ll, ll>> vc;
    cin >>N;
    for(ll i=0; i<N;i++){
        cin >> X >> L;
        vc.emplace_back(X,L);
    }
    sort( begin( vc ), end( vc ) );
    ll Xi=0,Li=0;
    X=-1;
    for(auto x : vc){
        Xi = get<0>(x);
        Li = get<1>(x);
        if(X+L > Xi-Li &&  X > -1 ){
            if(X+L>=Xi+Li){
                X=Xi;
                L=Li;
            }
        }else{
            X=Xi;
            L=Li;
            robo++;
        }
    }

    cout << robo << endl;
    return 0;
}