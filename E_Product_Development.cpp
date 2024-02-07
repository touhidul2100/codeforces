// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vl vector<ll>
// #define ff first
// #define ss second
// #define pb push_back
// #define pl pair<ll,ll>
// #define vpl vector<pl>
// #define fileread(x) freopen(x,"r",stdin)
// #define filewrite(x) freopen(x,"w",stdout)
// #define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
// #define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
// #define all(_a) _a.begin(), _a.end()
// #define mx(_a) *max_element(all(_a))
// #define mn(_a) *min_element(all(_a))
// #define sum(_a) accumulate(all(_a),0);
// #define nn '\n'
// #define inf LONG_MAX
// #define N 100005;
// #define ok cout << "OK" << nn;
// vl ara[101];
// ll cost[101];
// ll dp[105][10][10][10];
// vector<ll>vv;
// ll ans(ll i,ll cst,ll n,ll k,ll t1,ll t2,ll t3)
// {
// if(t1>=k && t2>=k&& t3>k)
// {
// vv.pb(cst);
// return 0;
// }
// if(dp[i][t1][t2][t3]!=-1)
// {
    
// }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     // ll test,tst;
//     // cin>>test;
//     // for(tst=1;tst<=test;tst++){
//     ll n, i,m,a,b, j, k, sm = 0;
//     cin>>n>>m>>k;
//     for(i=1;i<=n;i++)
//     {
//         cin>>cost[i];
//         for(j=1;j<=m;j++)
//         {
//             cin>>a;
//             ara[i].pb(a);
//         }
//     }
//     for(i=1;i<=n;i++)for(j=1;j<10;j++)for(k=1;k<10;k++)for(a=1;a<10;a++)dp[i][j][k][a]=-1;

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) 1
#endif

const long long inf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(k));
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }
    int mx = 1;
    for (int i = 0; i < k; i++) {
        mx *= (p + 1);
    }
    vector<vector<long long>> dp(n + 1, vector<long long>(mx, inf));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < mx; j++) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            vector<int> b(k);
            int nj = j;
            for (int l = 0; l < k; l++) {
                b[l] = nj % (p + 1);
                b[l] += a[i][l];
                b[l] = min(b[l], p);
                nj /= (p + 1);
            }
            int nx = 0;
            reverse(b.begin(), b.end());
            for (int l = 0; l < k; l++) {
                nx *= (p + 1);
                nx += b[l];
            }
            assert(nx < mx);
            dp[i + 1][nx] = min(dp[i + 1][nx], dp[i][j] + c[i]);
        }
    }
    if (dp[n][mx - 1] == inf) {
        cout << -1 << '\n';
    } else {
        cout << dp[n][mx - 1] << '\n';
    }
}