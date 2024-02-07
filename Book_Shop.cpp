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
#define N 20005
#define ok cout << "OK" << nn;
ll page[N];
ll price[N];
ll n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll i, m, a, b, j, k, sm = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
        cin >> price[i];
    for (i = 1; i <= n; i++)
        cin >> page[i];
  ll dp[k+5];
  memset(dp,0,sizeof(dp));
   for(i=1;i<=n;i++)
   {
    for(j=k;j>=price[i];j--)
    {
        dp[j]=max(dp[j],page[i]+dp[j-price[i]]);
    }
   }
   cout<<dp[k]<<nn;
    return 0;
}