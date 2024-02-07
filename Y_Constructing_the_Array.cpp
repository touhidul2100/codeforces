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
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    ll ara[n + 5];
    for (i = 1; i <= n; i++)
        ara[i] = 0;
    priority_queue<pair<ll, pl>> qq;
    ll l = 1, r = n;
    ll len = r - l + 1;
    qq.push({len, {-l, -r}});
    ll cnt = 1;
    while (!qq.empty())
    {
        l = -qq.top().ss.ff;
        r = -qq.top().ss.ss;
        len = r - l + 1;
        qq.pop();
        if (r == l)
        {
            ara[l] = cnt++;
        }
        else if (r > l)
        {
            ll mid = (r + l) / 2;
            ara[mid] = cnt++;
            if(mid-1>=l)
            qq.push({mid - l, {-l, -(mid - 1)}});
            if(r>=mid+1)
            qq.push({r - mid, {-(mid + 1), -r}});
        }
        if(cnt>n)break;
    }
    for(i=1;i<=n;i++)cout<<ara[i]<<" ";cout<<nn;}
    return 0;
}
