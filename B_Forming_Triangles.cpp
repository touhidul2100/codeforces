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
#define N 300005
#define ok cout << "OK" << nn;
ll ara[N];
void init()
{
    ara[0] = 0;
    for (ll i = 1; i < N; i++)
    {
        ara[i] = ((i * (i + 1)) / 2) + ara[i - 1];
    }
}
int main()
{

    init();
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k;
        cin >> n;
        vl v(n);
        read(v, n);
        map<ll, ll> mp;
        for (i = 0; i < n; i++)
            mp[v[i]]++;
        ll ans = 0;
        ll pv[n + 5];
        pv[0] = 0;
        for (i = 0; i <= n;i++)
        {
            if (i == 0)
                pv[i] = mp[i];
            else
                pv[i] = (mp[i] + pv[i - 1]);
            ll tm = mp[i] ;
            if (mp[i] >= 2 && i >= 1 && pv[i - 1] > 0)
            {
                 ll tpp=mp[i]-1;
                    tpp=(tpp*(tpp+1))/2;
                    ans += ((pv[i - 1]) *tpp);
            }
            if (tm > 2)
            {
              ans+=ara[tm-2];
            }
           
        }
        cout << ans << nn;
    }
    return 0;
}
