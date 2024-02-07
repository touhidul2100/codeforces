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
   cin>>sm>>n;
   map<ll,vl>mp;
   for(i=1;i<=sm;i++)
   {
    cin>>k;
    mp[k].pb(i);
    //cout<<"i="<<i<<" k="<<k<<nn;
   }
   
   multiset<ll>st[n+1];
   for(i=1;i<=n;i++)
   {
    //cout<<"i="<<i<<nn;
    mp[i].insert(mp[i].begin(),0);
    mp[i].pb(sm+1);
   // cout<<"mp="<<nn;
    //for(auto x:mp[i])cout<<x<<" ";cout<<nn<<"st"<<nn;
    for(j=0;j<mp[i].size()-1;j++)
    {
        st[i].insert(mp[i][j+1]-mp[i][j]-1);
       // cout<<mp[i][j+1]-mp[i][j]-1<<" ";
    }
  //cout<<nn;
   }
   ll ans=INT_MAX;
   for(i=1;i<=n;i++)
   {
    auto it=st[i].end();
    it--;
    a=*it/2;
    
    it--;
    b=*it;
   ///cout<<"i="<<i<<" a="<<a<<" b="<<b<<nn;
    ll tm=max(a,b);
    ans=min(ans,tm);
   }
   cout<<ans<<nn;}
    return 0;
}
