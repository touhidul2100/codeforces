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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0,x,y;
    cin>>n>>k>>a>>b;
    pair<ll,ll>adj[n+5];
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        pair<ll,ll>p;
        p=make_pair(x,y);
        adj[i]=p;
    }
    if(k>=a && k>=b)
    {
        cout<<0<<nn;
        continue;
    }
    ll am=1e18,bm=1e18;
     if(a<=k)am=0;if(b<=k)bm=0;
    for(i=1;i<=k;i++)
    {
        x=abs(adj[i].ff-adj[a].ff)+abs(adj[i].ss-adj[a].ss);
        y=abs(adj[i].ff-adj[b].ff)+abs(adj[i].ss-adj[b].ss);
        am=min(am,x);bm=min(bm,y);
        
    }
   
    ll mnn=abs(adj[a].ff-adj[b].ff)+abs(adj[a].ss-adj[b].ss);
    ll smm=am+bm;
    ll ans=min(mnn,smm);
  cout<<ans<<nn;
  }
    return 0;
}
