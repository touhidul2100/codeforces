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
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
   
    cin>>n;
    map<ll,ll>mp;
    set<ll>st;
    vector<pair<ll,ll>>vp;
    for(i=0;i<n;i++)
    {
        cin>>j>>k;
        mp[j]++;
      vp.pb({k,j});
       // st.insert(j);
    }
  sort(vp.begin(),vp.end());
  reverse(vp.begin(),vp.end());
  ll ans=0;
  ll tm=vp[0].ff;ll tm2=vp[0].ss;
  for(i=1;i<n;i++)
  {
    ll t1=vp[i].ff;
    ll t2=vp[i].ss;
    if(t2==tm2)
    {
        ll tss=tm+t1/2;
        ans=max(ans,tss);
    }
    else
    {
         ll tss=t1+tm;
        ans=max(ans,tss);
    }
  }
  cout<<ans<<nn;
    return 0;
}
