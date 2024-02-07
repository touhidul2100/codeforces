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
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll dist[n+5];
    ll par[n+5];
    for(i=1;i<=n;i++)
    {
        dist[i]=inf;
        par[i]=i;
    }
    dist[1]=0;
    priority_queue<pair<ll,ll>,vpl,greater<>>qq;
    qq.push({0,1});
    ll cnt=0;
    while(!qq.empty())
    {
        ll node=qq.top().ss;
        ll dis=qq.top().ff;
        qq.pop();
       // cout<<"Node="<<node<<nn;
        for(auto x:adj[node])
        {
            if(dis+1<dist[x])
            {
                dist[x]=dis+1;
                qq.push({dist[x],x});
                par[x]=node;
            }
        }
       // if(cnt++>20)break;
    }
    if(dist[n]==inf)
    {
        cout<<"IMPOSSIBLE"<<nn;
    }
    else 
    {
        vl v;
        ll tm=n;
        v.pb(tm);
        while(par[tm]!=tm)
        {
              tm=par[tm];
            v.pb(tm);
          
        }
        reverse(all(v));
        cout<<v.size()<<nn;
        show(v);
    }
    return 0;
}
