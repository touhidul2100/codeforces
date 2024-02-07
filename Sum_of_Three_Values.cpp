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
        cin >> n >> k;
        vector<pl> vp;
        for (i = 1; i <= n; i++)
        {
            cin >> a;
            vp.pb({a, i});
        }
        // sort(all(vp));
        sort(all(vp), [](const pl &al, const pl &bl)
             { return (al.ff == bl.ff) ? (al.ss < bl.ss) : (al.ff < bl.ff); });
        // for (auto x : vp)
        //     cout << x.ff << " " << x.ss << nn;
        bool impos = 0;
        vl ans;
        for (i = 0; i < n - 2; i++)
        {
            for (j = i + 1; j < n - 1; j++)
            {
                // if (vp[i].ff + vp[j].ff > k)
                // {
                //     impos = 1;
                //     break;
                // }

                ll lgbe = k - (vp[i].ff + vp[j].ff);
                // cout << "i=" << i << " j=" << j << " lgbe=" << lgbe << nn;
                ll left = j + 1, right = n - 1, mid;
                bool f = 0;
                while (left <= right)
                {
                    mid = left + (right - left) / 2;
                    if (vp[mid].ff == lgbe)
                    {
                        ans.pb(vp[i].ss);
                        ans.pb(vp[j].ss);
                        ans.pb(vp[mid].ss);
                        sort(all(ans));
                        break;
                    }
                    else if (vp[mid].ff > lgbe)
                        right = mid;
                    else
                        left = mid + 1;
                    if (f)
                        break;
                    if (left == right)
                        f = 1;
                }
                if (ans.size() == 3)
                    break;
            }
            if (ans.size() == 3)
                break;
            // if (impos)
            //     break;
        }
        if (ans.size() == 3)
        {
            show(ans);
            continue;
        }

        cout << "IMPOSSIBLE" << nn;
    }
    return 0;
}
