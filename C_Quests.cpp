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
#define N 200005
#define ok cout << "OK" << nn;
   
ll cal(ll i, ll cnt,ll n,ll pre[],ll mx[])
{
    ll t1 = min(i + cnt, n);
    ll ans = 0;
    ans += (pre[t1] - pre[i]);
    if (i + cnt > n)
        ans += ((i + cnt - n) * (mx[n]));
    // cout<<"in i="<<ans<<nn;
    return ans;
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        
        ll i, m, a, b, j; ll n, k;
        cin >> n >> k;
            
ll ara1[n+5], ara2[n+5];
ll pre[n+5], mx[n+5];
        for (i = 1; i <= n; i++)
            cin >> ara1[i];
        for (i = 1; i <= n; i++)
            cin >> ara2[i];
        pre[0] = 0;
        for (i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + ara1[i];
        mx[0] = 0;
        for (i = 1; i <= n; i++)
            mx[i] = max(ara2[i], mx[i - 1]);
        ll final = 0;
        ll cnt = 0;
        for (i = 1; i <= n; i++)
        {
            if (i > k)
                break;
            ll tm = cal(i, k - i,n,pre,mx);
            ll t2 = (k - i) * (mx[i]);
            //cout<<"k-i="<<k-i<<" mx[i]="<<mx[i]<<nn;
            ll ans = pre[i] + max(tm, t2);
            final = max(ans, final);
          //cout<<"i="<<i<<" ans="<<ans<<" tm="<<tm<<" t2="<<t2<<nn;
        }
        cout << final << nn;
    }
    return 0;
}
