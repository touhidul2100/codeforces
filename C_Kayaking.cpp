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
#define N 2000005
#define ok cout << "OK" << nn;
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
        n *= 2;
        vl vv(n);
        read(vv, n);
        ll final = inf;
        for (ll ii = 0; ii < n; ii++)
        {
            for (j = ii + 1; j < n; j++)
            {
                vl v;
                for (k = 0; k < n; k++)
                {
                    if (k == ii || k == j)
                        continue;
                       // cout<<"k="<<k<<nn;
                        // else 
                    v.pb(vv[k]);
                }
                // cout<<"i="<<ii<<" j="<<j<<nn;
                // show(v);
                vl ans;
                sort(all(v));
                for (i = 0;i<v.size()-1; i += 2)
                {
                    ans.pb(abs(v[i + 1] - v[i]));
                }
                sm = 0;
                for (i = 0; i < ans.size(); i++)
                    sm += ans[i];
                final = min(final, sm);
                // break;
            }
            // break;
        }
        cout << final << nn;
    }
    return 0;
}
