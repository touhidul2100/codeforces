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
#define nn '\n';
#define inf 1e18
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        for (i = 1; i <= n; i++)
        {
            for (j = i; j <= n; j += i)
            {
                v[i - 1] = max(v[i - 1], v[j - 1]);
            }
        }
        sort(all(v));
        ll tm = 1;
        ll md = 998244353;
        for (i = 0; i < n; i++)
        {
            ll t2 = (tm * v[i]) % md;
            sm += t2;
            sm %= md;
            tm *= 2;
            tm %= md;
        }
        sm %= md;
        cout << sm << nn;
    
    return 0;
}
