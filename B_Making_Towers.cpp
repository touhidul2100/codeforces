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
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin >> n;
    vl vv[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> k;
        vv[k].pb(i);
    }
    vl v;
    for (i = 1; i <= n; i++)
    {
        ll ans = 0,curr=0;
        if (vv[i].size() > 0)
        {
             curr = vv[i][0];
            ans = 1;
        }
        for (j = 1; j < vv[i].size(); j++)
        {
            if ((curr & 1) != (vv[i][j] & 1))
            {
                ans++;
                curr=vv[i][j];
            }
            
        }
        v.pb(ans);
    }
    show(v)}
    return 0;
}
