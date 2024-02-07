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
        ll n, i, m, a, b, j, k;
        cin >> n >> m;
        vl vl1, vr1, vl2, vr2;
        for (i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a > 1)
            {
                vl1.pb(a);
                vr1.pb(b);
            }
            if (b < m)
            {
                vl2.pb(a);
                vr2.pb(b);
            }
        }
        ll c1 = 0;
        i = 0;
        j = 0;
        ll ans = 0;
        sort(all(vl1));
        sort(all(vr1));

        while (i < vl1.size() && j < vr1.size())
        {
            if (vl1[i] <= vr1[j])
            {
                c1++;
                ans = max(ans, c1);
                i++;
            }
            else
            {
                j++;
                c1--;
            }
        }
     
        c1 = 0;
        i = 0;
        j = 0;
        sort(all(vl2));
        sort(all(vr2));
        // show(vl2);
        // show(vr2);
        while (i < vl2.size() && j < vr2.size())
        {
            if (vl2[i] <= vr2[j])
            {
                c1++;
                ans = max(ans, c1);
                i++;
            }
            else
            {
                j++;
                c1--;
            }
        }

      
        cout << ans << nn;
    }
    return 0;
}
