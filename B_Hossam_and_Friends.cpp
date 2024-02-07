#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
   cin>>n>>m;
   ll mn[100005];
   
   for(i=1;i<=n;i++)mn[i]=n+1;
   for(i=0;i<m;i++)
   {
    cin>>j>>k;
    if(j>k)swap(j,k);
    mn[j]=min(mn[j],k);
   }
   ll ans=n;
//    for(i=1;i<n;i++)
//    cout<<i<<" min="<<mn[i]<<nn;
for(i=n-2;i>0;i--)mn[i]=min(mn[i],mn[i+1]);
   for(i=1;i<n;i++)
   {
    ll a=(mn[i]-i)-1;
    if(a>0)ans+=a;
   }
   cout<<ans<<nn;}
    return 0;
}
