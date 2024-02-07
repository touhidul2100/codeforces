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
ll dp[N];
vector<ll>to_ara(ll n)
{
    ll tm=n;
    vl v;
    while(tm!=0)
    {
        v.pb(tm%10);
        tm/=10;
    }
    return v;
}
ll dpp(ll n)
{
   // cout<<"n="<<n<<nn;
    if(n==0)return 0;
    if(n<0)return inf;
    if(dp[n]!=-1)return dp[n];
    vl v=to_ara(n);
   // show(v);
    dp[n]=inf;
    for(auto x:v)
    {
        dp[n]=min(dp[n],(1+(dpp(n-x))));
    }
    return dp[n];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    for(i=1;i<=n;i++)dp[i]=-1;
    dp[0]=0;
    ll ans=dpp(n);
    cout<<dp[n]<<nn;
    return 0;
}
