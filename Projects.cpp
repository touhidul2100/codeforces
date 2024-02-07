#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
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
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k,c, sm = 0;
    cin>>n;
    vector<pair<pl,ll>>vp;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        vp.pb({{a,b},c});
    }
sort(all(vp),[](const pair<pl,ll>&p1,const pair<pl,ll>&p2)
{
return (p1.ff.ss==p2.ff.ss)?(p1.ff.ff<p2.ff.ff):(p1.ff.ss<p2.ff.ss);
});
// cout<<nn;
// for(auto x:vp)cout<<x.ff.ff<<" "<<x.ff.ss<<" "<<x.ss<<nn;cout<<nn;
ll dp[n];
dp[0]=vp[0].ss;
for(i=1;i<n;i++)
{
    ll left=0,right=i-1,mid;
    ll req=-1;
    bool f=0;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(vp[mid].ff.ss<vp[i].ff.ff && vp[mid+1].ff.ss>=vp[i].ff.ff)
        {
            req=mid;
            break;
        }
        else if(vp[mid].ff.ss<vp[i].ff.ff)left=mid+1;
        else right=mid;
        if(f)break;
        if(left==right)f=1;
    }
    if(req!=-1)
    {
        dp[i]=vp[i].ss+dp[req];
    }
    else dp[i]=vp[i].ss;
    dp[i]=max(dp[i],dp[i-1]);
    //cout<<"i="<<i<<" dp="<<dp<<nn;
}
cout<<dp[n-1]<<nn;
   } return 0;
}
