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
        sm = (n / 2) + n;
        if (sm > k)
        {
            cout << -1 << nn;
            continue;
        }
        a = n / 2;

        if (a & 1)
        {
            if (k & 1)
            {
                ll barti = k - (a + a * 2);
                
                vl v;
                for (i = 1; i <= a; i++)
                {
                    if (barti > 0)
                    {
                        ll t2 = 99998;
                            ll bad=min(t2, barti);
                        ll tm = 1 + bad;
                        barti -= bad;
                        v.pb(tm);
                    }
                    else
                        v.pb(1);
                }
                for (i = 1; i <= a; i++)
                {
                    if (barti > 0)
                    {
                        ll t2 = 99998;
                            ll bad=min(t2, barti);
                        ll tm = 2 + bad;
                        barti -= bad;
                        v.pb(tm);
                    }
                    else
                        v.pb(2);
                }
                if (barti == 0)
                {
                    for (i = 0; i < v.size(); i++)
                        cout << v[i] << " ";
                    cout << nn;
                }
                else
                    cout << -1 << nn;
                
            }

            else
                cout << -1 << nn;
            continue;
        }

        else
        {
            if (k & 1)
                cout << -1 << nn;
            else
            {
                ll barti = k - (a + a * 2);
             
                vl v;
                for (i = 1; i <= a; i++)
                {
                    if (barti > 0)
                    {
                        ll t2 = 99998;
                            ll bad=min(t2, barti);
                        ll tm = 1 + bad;
                        barti -= bad;
                        v.pb(tm);
                    }
                    else
                        v.pb(1);
                }
                for (i = 1; i <= a; i++)
                {
                    if (barti > 0)
                    {
                        ll t2 = 99998;
                            ll bad=min(t2, barti);
                        ll tm = 2 + bad;
                        barti -= bad;
                        v.pb(tm);
                    }
                    else
                        v.pb(2);
                }
                if (barti == 0)
                {
                    for (i = 0; i <v.size(); i++)
                        cout << v[i] << " ";
                    cout << nn;
                }
                else
                    cout << -1 << nn;
              
            }
           
        }
    }
    return 0;
}
