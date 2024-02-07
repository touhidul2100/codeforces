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
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, k;
    cin >> test;
    for (k = 1; k <= test; k++)
    {
        ll n, m, i, j, k, sm = 0;
        cin >> n >> m;
        k = n * m;
        ll s = min(n, m);
        vl v(k);
        read(v, k);
        sort(all(v));
        ll mn1 = v[0], mn2 = v[1], m1 = v[k - 1], m2 = v[k - 2];
        ll ans1 = ((k - s) * abs(m1 - mn1)) + (abs(m2 - mn1)) * (s - 1);
        ll ans2 = ((k - s) * abs(m1 - mn1)) + abs(m1 - mn2) * (s - 1);
        cout << max(ans1, ans2) << nn;
    }
  
    return 0;
}
