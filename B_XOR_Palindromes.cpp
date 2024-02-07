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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    string st, st2;
    cin >> n >> st;
    st2 = st;
    reverse(st2.begin(), st2.end());
    bool f[n + 5];
    for (i = 0; i <= n; i++)
        f[i] = 0;
    if (st == st2)
        f[0] = 1;
    ll tp0 = 0, tp1 = 0;
    ll l = 0;
    ll r = n - 1;
    while (l < r)
    {
        if (st[l] == st[r])
        {
            if (st[l] == '0')
                tp0++;
            else
                tp1++;
        }
        l++;
        r--;
    }
    ll t0 = 0, t1 = 0;
    for (i = 0; i < n; i++)
    {
        if (st[i] == '0')
            t0++;
        else
            t1++;
    }
    bool m0 = 0, m1 = 0;
    if (n & 1 && st[n / 2] == '0')
        m0 = 1;
    else if (n & 1 && st[n / 2] == '1')
        m1 = 1;
    f[t0] = 1;
    f[t1] = 1;
    // cout<<"m0="<<m0<<" m1="<<m1<<nn;
    // cout<<"tp0="<<tp0<<" tp1="<<tp1<<nn;
    // cout<<"t0="<<t0<<" t1="<<t1<<nn;
    for (i = 1; i <= tp0; i++)
    {
        f[t0 - 2 * i] = 1;
        f[t1 + 2 * i] = 1;
        if (m1)
        {
            f[t0 - 2 * i + 1] = 1;
            f[t1 + 2 * i - 1] = 1;
        }
        if (m0)
        {
            f[t0 - 2 * i - 1] = 1;
            f[t1 + 2 * i + 1] = 1;
        }
    }
    for (i = 1; i <= tp1; i++)
    {
        f[t1 - 2 * i] = 1;
        f[t0 + 2 * i] = 1;
        if (m0)
        {
            f[t1 - 2 * i + 1] = 1;
            f[t0 + 2 * i - 1] = 1;
        }
        if (m1)
        {
            f[t1 - 2 * i - 1] = 1;
            f[t0 + 2 * i + 1] = 1;
        }
    }
    for (i = 0; i <= n; i++)
        cout << f[i];
    cout << nn;}
    return 0;
}
