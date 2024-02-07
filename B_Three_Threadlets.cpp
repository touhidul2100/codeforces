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
        ll n, i, m, a, b, c, j, k, sm = 0;
        n = 3;
        vl v(n);
        read(v, n);
        sort(all(v));
        a = v[0];
        b = v[1];
        c = v[2];
       // cout<<a<<" "<<b<<" "<<c<<nn;
        if (a == b && a == c)
        {
            cout << "YES" << nn;
            continue;
        }
       
        if (b % a == 0 && c % a == 0)
        {
             ll cnt = 0;
            ll t1 = b / a;
            ll t2 = c / a;
            if (t1 == 2)
                cnt = 1;
            else if (t1 > 2)
            {
                cout << "NO" << nn;
                continue;
            }
            if (t2 == 2)
                cnt += 1;
            else if (t2 == 3)
                cnt += 2;
                else if(t2==4)cnt+=3;
            else if (t2 > 4)
            {
                cout << "NO" << nn;
                continue;
            }
            if (cnt <= 3)
                cout << "YES" << nn;
            else
                cout << "NO" << nn;
        }
        else
            cout << "NO" << nn;
    }
return 0;}