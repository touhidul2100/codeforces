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
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> m;
    vl v(n + 1);
    for (i = 1; i <= n; i++)
        cin >> v[i];
    ll cnt = 0;
    for (i = 3; i <= n; i++)
    {
        ll key = v[i - 2];
        if (abs(v[i] - key) > m)
            continue;
        ll left = i, right = n, mid;
        while (left <= right)
        {
            mid = (left + right) >> 1;
            if (((v[mid] - key) <= m) && ((mid == n) || (v[mid + 1]) - key > m))
            {
                ll tm = (mid - i + 1);
                tm = ((tm + 1) * tm) / 2;
                cnt += tm;
                break;
            }
            else if ((v[mid] - key) > m)
                right = mid;
            else
                left = mid + 1;
        }
        // cout<<"i="<<i<<" cnt="<<cnt<<nn;
    }
    cout << cnt << nn;
    return 0;
}
