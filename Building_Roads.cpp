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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
vector<ll>adj[N];
bool visited[N];
void dfs(ll node,ll par)
{
    visited[node]=1;
    for(auto x:adj[node])
    {
        if(x==par)continue;
        if(!visited[x])
        {
            dfs(x,node);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        adj[a].pb(b);adj[b].pb(a);
    }
    memset(visited,0,sizeof(visited));
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            v.pb(i);
            dfs(i,0);
        }
    }
    if(v.size()==0)cout<<0<<nn;
    else 
    {
        cout<<v.size()-1<<nn;
        for(i=0;i<v.size()-1;i++)
        cout<<v[i]<<" "<<v[i+1]<<nn;
    }
    return 0;
}
