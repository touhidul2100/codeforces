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
#define inf 1e18
#define N 100005;
#define ok cout << "OK" << nn;
ll ans=0;
void solve(ll l ,ll r,ll ara[])
{
    if(l==r)return ;
   ll mid=l+(r-l)/2;
   solve(l,mid,ara);
   solve(mid+1,r,ara);
   if(ara[l]>ara[r])
   {
   // cout<<"l="<<l<<" r="<<r<<nn;
    ans++;
    vl v1,v2;ll i;
    for(i=l;i<=mid;i++)v1.pb(ara[i]);
    for(i=mid+1;i<=r;i++)v2.pb(ara[i]);
    ll cnt=0;
     for(i=l;i<=mid;i++)ara[i]=v2[cnt++];cnt=0;
    for(i=mid+1;i<=r;i++)ara[i]=v1[cnt++];
   }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    ll ara[n];
    for(i=0;i<n;i++)cin>>ara[i];
    solve(0,n-1,ara);
   if(!(is_sorted(ara,ara+n)))cout<<-1<<nn;
    else cout<<ans<<nn;
    ans=0;}
    return 0;
}
