#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 5005
#define ok cout << "OK" << nn;
ll dp[5005][5005];
ll ara[N];
ll dpp(ll i, ll j)
{
   //cout << "first=" << i << " " << j << nn;
    if (i == j)
        return ara[i];
    if (i > j) return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    
    dp[i][j]= max(ara[i] + min(dpp(i +2, j),dpp(i+1,j-1)), ara[j] + min(dpp(i,j-2),dpp(i+1,j-1)));
  
    return dp[i][j];
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> ara[i];
        for (i = 1; i < N; i++)
            for (j = 1; j < N; j++)
                dp[i][j] = -1;
                bool f=1;
        ll ans1 = dpp(1, n);
        for (i = 1; i < N; i++)
            for (j = 1; j < N; j++)
                dp[i][j] = -1;
                  ll ans2 = dpp(1, n);
        cout << max(ans1,ans2)<< nn;
    }
    return 0;
}
