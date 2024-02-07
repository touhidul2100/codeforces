#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    ll mul[n+5];
    ll ara1[n+5];
    ll ara2[n+5];
    for(i=1;i<n;i++)cin>>ara1[i];
    for(i=1;i<n;i++)cin>>ara2[i];
    for(i=1;i<=n;i++)cin>>mul[i];
    ll pre1[n+5];pre1[1]=0;
   ll pre2[n+5];pre2[1]=0;
    for(i=1;i<n;i++)
    {
        pre1[i+1]=pre1[i]+ara1[i];
    }
    for(i=1;i<n;i++)
    {
        pre2[i+1]=pre2[i]+ara2[i];
    }
    vl v;
    for(i=1;i<=n;i++)
    {
     ll ans1=pre1[i]+pre2[n]-pre2[i]+mul[i];
     v.pb(ans1);
      
    }
    sort(all(v));
    cout<<v[0]+v[1]<<nn;
    return 0;
}
