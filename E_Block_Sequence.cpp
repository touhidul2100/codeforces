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
#define N 200005
#define ok cout << "OK" << nn;
// ll ara[N];
// ll dp[N];
// ll n;
// ll cnt=0;
ll dpp(ll i,ll n,ll ara[],ll dp[])
{   
    // if(cnt++>30)return 0;
 //  cout<<"i="<<i<<nn;
    if(i>n+1)return inf;
    if(i==n+1)return 0;
    if(dp[i]!=-1)return dp[i];
ll ans=dpp(i+ara[i]+1,n,ara,dp);
//ans=min(ans,n-i+1);
ll tm=1+dpp(i+1,n,ara,dp);
ans=min(ans,tm);
// for(ll j=i+1;j<=n;j++)
// {
//    ll tm=(j-i)+dpp(j,n,ara,dp);
//    ans=min(ans,tm);
// }
dp[i]=ans;
//cout<<"i="<<i<<" dp="<<dp[i]<<nn;
return dp[i];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll i,n,m,a,b, j, k, sm = 0;
    
    cin>>n;
    ll ara[n+1],dp[n+1];
    for(i=1;i<=n;i++)cin>>ara[i];
    memset(dp,-1,sizeof(dp));
   ll ans=dpp(1,n,ara,dp);
    
    cout<<dp[1]<<nn;}
    return 0;
}
