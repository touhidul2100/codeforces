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
#define N 200005
#define ok cout << "OK" << nn;
bool check(bool flag[], ll m)
{
    bool cnt = 1;
    for (ll i = 0; i < m; i++)
    {
        if (!flag[i])
        {
            //cout << "in=" << i << nn;
            cnt = 0;
            break;
        }
    }
    return cnt;
}
char bad(bool flag[], ll m)
{
    char c = 'a';
    for (ll i = 0; i < m; i++)
    {
        if (!flag[i])
        {
            c = i + 'a';
            break;
        }
    }
    return c;
}
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
        ll n, i, m, a, b, j, k;
        cin >> k >> m >> n;
        string st;
        cin >> st;
        vpl vp;
        bool f = 0;
        bool flag[26];
        for (j = 0; j < 26; j++)
            flag[j] = 0;
        ll fi, si;
        for (i = 0; i <= n; i++)
        {
            if (f)
            {
              //  cout << "i=" << i - 1 << nn;
                bool ck = check(flag, m);
                if (ck)
                {

                    vp.pb({fi, i - 1});
                  //  cout << fi << " " << i - 1 << nn;
                    f=0;
                }
              
            }
            if (i == n)
                break;
            if (!f)
            {
                fi = i;
                for (j = 0; j < 26; j++)
                    flag[j] = 0;
                f = 1;
            }
            flag[st[i] - 'a'] = 1;
        }
      //  cout << "siz=" << vp.size() << nn;
        if (vp.size() >= k)
        {
            cout << "YES" << nn;
            continue;
        }
        char ans = bad(flag, m);
        cout << "NO" << nn;
        for (auto x : vp)
            cout << st[x.ss];
        ll sb = k - vp.size() - 1;
        while (sb--)
            cout << 'a';
        cout << ans << nn;
    }
    return 0;
}
