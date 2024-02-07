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
        ll n, i, m, a, b, j, sm = 0;
        cin >> a >> b >> n;
        ll t1 = (n * (n - 1)) / 2;
        if (t1 > (b - a))
        {
            cout << -1 << nn;
            continue;
        }
        else
        {

            vl v;
            v.pb(b);
            ll cnt = 1;
            ll t = 1;
            ll pv = 0;
            ll tm=b;
            while (cnt != (n - 1))
            {
                v.pb(tm-cnt);
             tm=tm-cnt;
                
                cnt++;
            }
            v.pb(a);

            reverse(all(v));
             show(v);
            v.clear();
            continue;
        }
       
    }
    return 0;
}
