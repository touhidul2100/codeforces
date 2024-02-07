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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
ll path[1005][1005];
  vector<string>v;
ll n;
ll md=1e9+7;
ll dp(ll i,ll j)
{
    if(i>=n||j>=n)return 0;
    if(v[i][j]=='*')return 0;
    if(i==n-1 && j==n-1)return 1;
    if(path[i][j]!=-1)return path[i][j];
    path[i][j]=dp(i+1,j)+dp(i,j+1);
    path[i][j]%=md;
    return path[i][j];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll i,m,a,b, j, k, sm = 0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        string st;
        cin>>st;
        v.pb(st);
    }
    for(i=0;i<n;i++)for(j=0;j<n;j++)path[i][j]=-1;
    ll ans=dp(0,0);
    cout<<ans<<nn;
    return 0;
}
