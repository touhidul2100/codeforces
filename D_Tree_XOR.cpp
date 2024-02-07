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
#define inf LONG_MAX
#define ok cout << "OK" << nn;
ll ara[200005];
ll ans[200005];
ll add=0;
vl adj[200005];
ll siz[200005];
ll n;
void dfs(ll node,ll par)
{
    siz[node]=1;
    for(auto x:adj[node])
    {
        if(x==par)continue;
        dfs(x,node);
        siz[node]+=siz[x];
    }
}
void dfss(ll node,ll par,ll val)
{
 cout<<"node="<<node<<" val="<<val<<nn;
    ans[node]=val;
    for(auto x:adj[node])
    {
        
        if(par==x)continue;
        ll t1=(ara[x]^ara[node]);
        ll t2=t1*(siz[x]);
        ll t3=t1*(n-siz[x]);
        add+=t2;
       cout<<"x="<<x<<" t2="<<t2<<" t3="<<t3<<" add="<<add<<nn;
        dfss(x,node,val+t3-t2);
    }
    cout<<"end of="<<node<<nn<<nn;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll  i,m,a,b, j, k, sm = 0;
    cin>>n;
    add=0;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        adj[i].clear();
        siz[i]=0;
        ans[i]=0;
    }
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1,0);
    dfss(1,0,0);
    for(i=1;i<=n;i++)
    {
        
        cout<<ans[i]+add<<" ";
    }
    cout<<nn;}
    return 0;
}
