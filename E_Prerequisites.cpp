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
vl adj[200005];
vl v;
bool visited[200005];
void dfs(ll node,ll par)
{
        //cout<<"node="<<node<<nn;
    visited[node]=1;
    for(auto x:adj[node])
    {
       
        if(x==par)continue;
        if(!visited[x])
        {
            dfs(x,node);
        }
         
    }
v.pb(node);
  
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        for(j=1;j<=k;j++)
        {
            cin>>a;
           adj[i].pb(a);
        }
    }
  for(i=1;i<=n;i++)visited[i]=0;
    dfs(1,-1);
    for(i=0;i<v.size()-1;i++)cout<<v[i]<<" ";
    for(i=0;i<=n;i++)adj[i].clear();
    v.clear();
  
    return 0;
}
