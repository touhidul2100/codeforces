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
#define sum(_a) accumulate(all(_a), 0);
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
        cin >> n >> k;
        vl v(n);
        read(v, n);
        sort(all(v));
        ll ans;
        bool f = 0;

        ll ln = 1;
        ll pv=0;sm=0;
        for (i = 1; i < n; i++)
        {
            pv = sm;
            sm = ((v[i] - v[i - 1]) * (i)) + pv;
            if (sm == k)
            {
                f = 1;
                ans = v[i];
                break;
            }
           else if (sm > k)
            {
                ans = v[i - 1];
                k-=pv;
                ans+=(k/i);
                f = 1;
                break;
            }
        }
        if (!f)
        {
            //  cout<<"sm="<<sm<<nn;
            ll tm = (k - sm) / n;
            // cout<<"tm="<<tm<<nn;
            ans = v[n - 1] + tm;
        }
        cout << ans << nn;
    }
    return 0;
}
