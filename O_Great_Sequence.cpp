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
        cin >> n >> k;
        vl v(n);
        read(v, n);
        sort(all(v));
        bool f[n + 5];
        for (i = 0; i < n; i++)
            f[i] = 1;
        ll pv = n;
        for (i = 1; i < n; i++)
        {
            if (v[i] == v[0] * k)
            {
                f[0] = 0;
                f[i] = 0;
                pv = i + 1;
                break;
            }
            else if (v[i] > v[0] * k)
            {

                pv = i;
                break;
            }
        }
        for (i = 1; i < n; i++)
        {
            if (f[i])
            {
                pv = max(pv, i + 1);
                for (j = pv; j < n; j++)
                {
                    if (f[j])
                    {
                        if (v[j] == (v[i] * k))
                        {
                            f[i] = 0;
                            f[j] = 0;
                            pv = j + 1;
                            break;
                        }
                        else if (v[j] > (v[i] * k))
                        {
                            // cnt++;
                            pv = j;
                            break;
                        }
                    pv=j;
                }
            }
            if (pv == n)
                break;
        }
        }
        ll cn = 0;
        for (i = 0; i < n; i++)
        {
            if (f[i])
            {
                cn++;
            }
        }
        cout << cn << nn;
    }
    return 0;
}
