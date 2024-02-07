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
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
cin>>n;vl v1(n),v2(n),v3(n);read(v1,n);read(v2,n);read(v3,n);
sort(all(v1));sort(all(v2));sort(all(v3));
vector<pair<ll,ll>>vv2;
for(i=0;i<n;i++)vv2.pb({v1[i],v2[i]});
vector<pair<ll,ll>>vv1;
sort(all(v1),greater<ll>());
for(i=0;i<n;i++)
{
    auto it=lower_bound(all(v2),v1[i]);
    vv1.pb({v1[i],*it});
v2.erase(it);
}
sort(all(vv1),[](pl &a,pl &b)
{
return (a.ss-a.ff==b.ss-a.ss)?(a.ss>=b.ss):(a.ss-a.ff>b.ss-a.ss);
});
ll ans=0;
// cout<<nn;
// for(auto x:vv1)cout<<x.ff<<" "<<x.ss<<nn;cout<<nn;
for(i=0;i<n;i++)
{
    ans+=((vv1[i].ss-vv1[i].ff)*v3[i]);
}
// cout<<ans<<nn;
sort(all(vv2),[](pl &a,pl &b)
{
return (a.ss-a.ff==b.ss-a.ss)?(a.ss>=b.ss):(a.ss-a.ff>b.ss-a.ss);
});
ll ans2=0;
for(i=0;i<n;i++)
{
    ans2+=((vv2[i].ss-vv2[i].ff)*v3[i]);
}
cout<<min(ans,ans2)<<nn;
   } return 0;
}
