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
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> a >> b;
        vl v(n);
        read(v, n);
        if (n == 1)
        {
            cout << 0 << nn;
            continue;
        }
        vl pos, neg;
        for (i = 0; i < n; i++)
        {
            if (v[i] > 0)
                pos.pb(v[i]);
            else
                neg.pb(abs(v[i]));
            v[i] = abs(v[i]);
        }
        sort(all(pos), greater<ll>());
        if (neg.empty())
        {
            ll ans = pos[0];
            ll cnt = 0;a+=b;
            for (i = 1; i < n - 1; i++)
            {
                if (cnt >= a)
                    break;
                ans += pos[i];
                cnt++;
            }
            ans -= pos[n - 1];
            cout << ans << nn;
            continue;
        }
        sort(all(neg), greater<ll>());
        if (pos.empty())
        {
           ll ans = neg[0];
            ll cnt = 0;
            a+=b;
            for (i = 1; i < n - 1; i++)
            {
                if (cnt >= a)
                    break;
                ans += neg[i];
                cnt++;
            }
            ans -=neg[n - 1];
            cout << ans << nn;
            continue;
        }
        auto it = find(all(v), neg[0]);
        v.erase(it);
        auto it1 = find(all(v), pos[0]);
        v.erase(it1);
        sort(all(v), greater<ll>());
        // show(v);
        ll ans = neg[0] + pos[0];
        ll cnt = 0;
        ll tm = a + b;
        for (i = 0; i < v.size(); i++)
        {
            if (cnt >= tm)
                break;
            ans += v[i];
            cnt++;
        }
        cout << ans << nn;
    }
    return 0;
}
