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
    ll n, i,m,a,b,x, j, k;
cin>>n>>k>>x;vl v(n);read(v,n);
sort(all(v));
ll sm=0;for(i=0;i<n;i++)sm+=v[i];
ll pre[n+5];pre[0]=0;for(i=0;i<n;i++)pre[i+1]=pre[i]+v[i];
ll ans=pre[max(0ll,n-x)]-(pre[n]-pre[max(0ll,n-x)]);
ll cnt=0;
for(i=n-1;i>=0;i--)
{
     cnt++;
    if(cnt<=k)
    {
        ans=max(ans,pre[max(0ll,i-x)]-(pre[i]-pre[max(0ll,i-x)]));
    }
    
    
}
cout<<ans<<nn;

   } return 0;
}
