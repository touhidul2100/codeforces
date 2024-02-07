#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
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
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        sm = accumulate(all(v), 0);
        if (!(sm & 1))
        {
            cout << 0 << nn;
            continue;
        }
        ll ans = INT_MAX;
        for (i = 0; i < n; i++)
        {
            ll tm = v[i];
            ll cnt = 0;
            if (v[i] & 1)
            {
                
                while (tm & 1)
                {
                    tm = tm >> 1;
                    // cout<<"cnt="<<cnt<<" tm="<<tm<<nn;
                    cnt++;
                }
            }
            else
            {
                
                 while (!(tm & 1))
                {
                    tm = tm >> 1;
                    // cout<<"cnt="<<cnt<<" tm="<<tm<<nn;
                    cnt++;
                }
            }
            ans = min(ans, cnt);
            if (ans == 1)
                break;
        }
        cout << ans << nn;
    }
    return 0;
}
