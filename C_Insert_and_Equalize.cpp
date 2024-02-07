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
#define N 2000005
#define ok cout << "OK" << nn;
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
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        sort(all(v));
        if (n == 1)
        {
            cout << 1 << nn;
            continue;
        }
        vl gd;
        ll tm = v[n - 1];
        for (i = 0; i < n - 1; i++)
        {
            gd.pb(tm - v[i]);
        }
        ll gc = gd[0];
        for (i = 1; i < gd.size(); i++)
        {
            gc = __gcd(gc, gd[i]);
        }
        sm = 0;
        for (i = 0; i < gd.size(); i++)
        {
            sm += (gd[i] / gc);
        }
      // cout<<"gc="<<gc<<" "<<sm<<nn;
        ll cnt = 1;
        for (i = n - 2; i >= 0; i--)
        {
            if (v[i] + gc < v[i + 1])
            {
               // cout<<"in="<<v[i]<<" "<<v[i+1]<<nn;
                break;
            }
            cnt++;
        }
        //cout<<"cnt="<<cnt<<" "<<n<<nn;
        ll ans1 = sm + (min(cnt, n));
        cout <<ans1<< nn;
    }
    return 0;
}
