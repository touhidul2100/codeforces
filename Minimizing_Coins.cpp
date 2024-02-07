#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
#define N 1000005
#define ok cout << "OK" << nn;
ll ara[N];
ll dp[N];
ll n;
ll cnt = 0;
ll dpp(ll w)
{
    // if(cnt++>20) return 0;
    //cout<<" w="<<w<<nn;
    if (w < 0)
        return inf;
     if(w==0)return 0;
    if (dp[w] != -1)
        return dp[w];
        ll ans=inf ;
     for(ll j=1;j<=n;j++)
     {
        ans=min(ans,1+dpp(w-ara[j]));
     }
     dp[w]=ans;
    return dp[w];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, m, a, b, j, k, sm = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> ara[i];
    memset(dp, -1, sizeof(dp));
    ll ans = dpp(m);
    if(dp[m]==inf)cout<<-1<<nn;
    else
    cout << dp[m] << nn;
    return 0;
}
