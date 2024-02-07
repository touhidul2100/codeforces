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
vector<ll>adj[200005];
ll cost[200005];
ll cost2[200005];
bool visited[200005];
bool visited2[200005];
void dfs(ll node,ll p)
{
    visited[node]=1;
    for(auto x:adj[node])
    {
        if(x==p)continue;
        if(visited[x]==0)
        {
            if(cost[node]+1>cost[x])
            cost[x]=cost[node]+1;
           dfs(x,node);
        }
    }
}
void dfs2(ll node,ll p)
{
    visited2[node]=1;
    for(auto x:adj[node])
    {
        if(x==p)continue;
        if(visited2[x]==0)
        {
            if(cost2[node]+1>cost2[x])
            cost2[x]=cost2[node]+1;
           dfs2(x,node);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0,vr,a,b;
   cin>>vr>>a>>b;
    memset(visited,0,sizeof(visited));
    memset(cost,0,sizeof(cost));
    for(i=1;i<=vr;i++)adj[i].clear();
   for(i=1;i<vr;i++)
   {
    cin>>j>>k;
    adj[j].pb(k);
    adj[k].pb(j);
   }

  dfs(1,-1);
  ll rem=1,ans=0;
   for(i=1;i<=vr;i++)
   {
    // cout<<"i="<<i<<" cost="<<cost[i]<<nn;
    if(cost[i]>=ans)
    {
        ans=max(cost[i],ans);
        rem=i;
    }
   }
   if(a<=b)
   {
    cout<<ans*a<<nn;
 continue;
   }
   memset(cost2,0,sizeof(cost2));
    memset(visited2,0,sizeof(visited2));
    //cout<<"rem="<<rem<<nn;
 dfs2(rem,-1);
 //cout<<"cost2="<<cost2[6]<<nn;
    for(i=1;i<=vr;i++)
    {
        ans=max(ans,cost2[i]*a-cost[i]*b);
    }
 cout<<ans<<nn;
  }
    return 0;
}
