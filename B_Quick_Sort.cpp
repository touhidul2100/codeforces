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
   cin>>n>>k;
   ll ara[n+1];for(i=1;i<=n;i++)cin>>ara[i];
   ll tm=1;
   ll cnt=0;
   for(i=1;i<=n;i++)
   {
    if(ara[i]==tm)cnt++,tm++;
   }
   ll t1=n-cnt;
   ll ans=t1/k;
   if((t1%k)!=0)ans++;
   cout<<ans<<nn;
   }
    return 0;
}