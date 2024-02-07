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
#define inf 1e16+9;
ll cost[200005];
vector<ll>adj[200005];
bool visited[200005];
ll dfs(ll node)
{
    visited[node]=1;
    ll sm=0;
    bool hashchild=false;
    for(auto x:adj[node])
    {
        hashchild=1;
            //if(x==par)continue;
            //if(visited[x]==1)return cost[x];
          if(visited[x]==0)
          {
       dfs(x);
          }
          sm+=cost[x];
    }
    // cout<<"node="<<node<<nn;
    // cout<<"cst="<<cost[node]<<" sm"<<sm<<nn;
    if(hashchild==false)sm=inf;
    cost[node]=min(sm,cost[node]);
    return cost[node];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){


    ll n, i, j, k,m, sm = 0;
   cin>>n>>m;
     for(int i=1;i<=n;i++)adj[i].clear();
       memset(visited,0,sizeof(visited));
   for(i=1;i<=n;i++)cin>>cost[i];
   for(i=1;i<=m;i++)
   {
    cin>>j;
    cost[j]=0;
   }
   ll tm;
//    cout<<"first:"<<nn;
//     for(i=1;i<=n;i++)cout<<cost[i]<<" ";cout<<nn;
   for(tm=1;tm<=n;tm++)
   {
    cin>>k;
    for(i=1;i<=k;i++)
    {
        cin>>j;
        adj[tm].pb(j);
    }
   }

   for(i=1;i<=n;i++)
   {
    if(visited[i]==0)
    {
       ll an= dfs(i);
    }
   }
   for(i=1;i<=n;i++)cout<<cost[i]<<" ";cout<<nn;
    }
    return 0;
}
