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
ll par[N];
vl adj[N];
ll visited[N];
vl ans;
bool f=0;
void dfs(ll node)
{
    //cout<<"node="<<node<<nn;
    
    if(f)return ;
   
    visited[node]=1;
    for(auto x:adj[node])
    {
    
           if(f)return ;
       if(visited[x]==1)
       {
        //cout<<"node="<<node<<" x="<<x<<endl;
        f=1;
        return ;
       }
       else if(visited[x]==0)dfs(x);
    
    }
 ans.pb(node);
 visited[node]=2;
}
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
cin>>n>>m;
for(i=0;i<=n;i++)visited[i]=0,par[i]=i;
for(i=0;i<m;i++)
{
    cin>>a>>b;
    adj[b].pb(a);
}
for(i=1;i<=n;i++)
{
    if(!visited[i] && par[i]==i)
    {
        dfs(i);
        if(f)
        {
            cout<<"IMPOSSIBLE"<<nn;
            break;
        }
    }
    if(f)break;
}
if(!f)show(ans)

   } return 0;
}
