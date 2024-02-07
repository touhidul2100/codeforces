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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
ll spf[N];
void prime()
{
    ll i, j;
    for (i = 1; i <= N; i++)
        spf[i] = i;
    for (i = 2; i <= N; i += 2)
        spf[i] = 2;
    for (i = 3; i <= N; i += 2)
    {
        if (spf[i] == i)
        {
            for (j = i * i; j <= N; j += i)
            {
                spf[j] = i;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    prime();
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        map<ll, ll> mp;
        for (i = 0; i < n; i++)
        {
            ll tm = v[i];
            while (tm != 1)
            {
                mp[spf[tm]]++;
                tm /= spf[tm];
            }
        }
        bool f = 1;
        for (auto x : mp)
        {
            ll tm = x.ss;
            if (tm % n != 0)
            {
                f = 0;
                break;
            }
        }
        // if (f)
        //     cout << "YES" << nn;
        // else
        //     cout << "NO" << nn;
        cout<<((f)?"YES":"NO")<<nn;
    }
    return 0;
}
