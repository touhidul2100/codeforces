#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
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
#define inf 1e18
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
    vl v(n + 1);
    ll total = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
            total += v[i];
    }
    ll ans = 0;
    for (i = 1; i <= n; i++)
    {
        if(i&1)
        {
            if(v[i]>0)
            {
                ans=max(total,ans);
                total-=v[i];
            }
            else
            {
                ans=max(ans,total+v[i]);
            }
        }
        else
        {
            if(v[i]>0)
            {
                ans=max(ans,total-v[i]);
               total-=v[i];
            }
            else 
            {
                ans=max(ans,total);
            }
        }
    }
    cout<<ans<<nn;}
    return 0;
}