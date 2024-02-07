#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
#define nn '\n'
#define inf LONG_MAX
#define N 100005;
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
        sort(all(v));
        map<ll, ll> mp;
        if (v[0] != 0)
        {
            cout << 0 << nn;
            continue;
        }
        ll tm = n;
        for (i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        for (i = 0; i < n; i++)
        {
            if (mp[i] < 1)
            {
                tm = i;
                break;
            }
        }

        // cout << "tm=" << tm << nn;
        ll pre[tm+1];for(i=0;i<=tm;i++)pre[i]=inf;
        pre[tm]=0;
        ll ans = mp[0] * tm;
       for(i=tm;i>=0;i--)
       {
        for(j=0;j<i;j++)
       {
        pre[j]=min(pre[j],pre[i]+(mp[j]-1)*i+j);
       }
       }
      cout<<pre[0]<<nn;
    }
    return 0;
}
