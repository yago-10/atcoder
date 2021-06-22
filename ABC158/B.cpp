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
    ll N,A,B;
    cin >> N >> A >> B;

    ll X = A*(N/(A+B));
    if(A<N%(A+B)){
        X += A;
    }else{
        X += N%(A+B);
    }
    cout <<X<<endl;

    return 0;    
}