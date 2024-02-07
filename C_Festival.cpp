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
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    bool f[n+5];
    for(i=1;i<=n;i++)f[i]=0;
    for(i=1;i<=m;i++)
    {
        cin>>a;
        f[a]=1;
    }
    ll cnt=0;
    ll ans[n+5];
  //  for(i=1;i<=n;i++)cout<<f[i]<<" ";cout<<nn;
    for(i=n;i>0;i--)
    {
        //cout<<"i="<<i<<" cnt="<<cnt<<" ";
        if(f[i])
        {
             ans[i]=0;
            cnt=0;
            
        }
        else 
        {
           cnt++;
            ans[i]=cnt;
        }
        //cout<<"ans="<<ans[i]<<" nw cnt="<<cnt<<nn;;
    }
    for(i=1;i<=n;i++)cout<<ans[i]<<nn;
    return 0;
}
