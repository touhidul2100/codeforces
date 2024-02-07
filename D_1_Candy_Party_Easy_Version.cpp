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
        cin >> n;
        vl v(n);
        read(v, n);
        for (i = 0; i < n; i++)
            sm += v[i];
       // cout << "sm=" << sm << nn;
        if (sm % n != 0)
        {
           cout << "No" << nn;
            continue;
        }
        ll av = sm / n;
       // cout << "av=" << av << nn;
        vl v1, v2;
        bool f = 1;
        for (i = 0; i < n; i++)
        {
            if (v[i] > av)
            {
                ll t1 = v[i] - av;
                while (t1 != 0)
                {
                    ll t2 = log2(t1);
                    v1.pb(1<<t2);
                    t1 -= (1<<t2);
                }
            }
            else if (v[i] < av)
            {
                ll t1 = av - v[i];
                while (t1 != 0)
                {
                    ll t2 = log2(t1);
                    v2.pb(1<<t2);
                    t1 -= (1<<t2);
                }
            }
        }
        sort(all(v1));
        sort(all(v2));
        show(v1);show(v2);
         if (f && (v1 == v2)) cout << "Yes" << nn;
        else cout << "No" << nn;
    }

    return 0;
}
