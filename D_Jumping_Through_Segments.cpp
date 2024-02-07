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
#define shiftleft(n) (static_cast<uint64_t>(1) << n)
#define shiftright(n, p) (static_cast<uint64_t>(n) >> p)
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
ll x[N], y[N];
bool possible(ll n, ll mid)
{
    bool f = 1;
    ll th= 0,tl=0;
    for (ll i = 1; i <= n; i++)
    {
       if(th+mid<x[i] || tl-mid>y[i])
       {
        f=0;break;
       }
       tl=max(x[i],tl-mid);
       th=min(y[i],th+mid);
    }

    return f;
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
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> x[i] >> y[i];
        // cout << possible(n, 100) << nn;
        ll left = 0, right = 1e9, mid;
      ll ans=right;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
           // cout <<"left="<<left<<" right="<<right<< " mid=" << mid <<" f=";
            
            if (possible(n,mid))
            {
                ans=mid;
                right=mid-1;
            }
           else left=mid+1;
         
        }
        cout << ans << nn;
    }
    return 0;
}
