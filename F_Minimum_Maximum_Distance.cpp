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
#define N 2000005
#define ok cout << "OK" << nn;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>k;
    vl v;
    vl adj[n+5];
bool clr[n+5];
memset(clr,0,sizeof(clr));
    for(i=0;i<k;i++){cin>>a;v.pb(a);clr[a]=1;}
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    if(k==1)
    {
        cout<<0<<nn;
        continue;
    }
  //  cout<<"at first="<<v[0]<<nn;
    priority_queue<pl>qq;
    qq.push({0,v[0]});
    ll dist[n+5];
    bool visited[n+5];
    memset(visited,0,sizeof(visited));
    memset(dist,0,sizeof(dist));
    ll source=v[0];ll mx=0;
    while(!qq.empty())
    {
       
        ll node=qq.top().ss;
        ll d=qq.top().ff;
        visited[node]=1;
       // cout<<"node="<<node<<" dist="<<d<<nn;
        qq.pop();
        for(auto x:adj[node])
        {
            if(1+dist[node]>dist[x] && !visited[x])
            {
                dist[x]=1+dist[node];
                qq.push({dist[x],x});
                if(dist[x]>mx && clr[x]==1)
                {
                    source=x;
                    mx=dist[x];
                }
            }
        }
    }
//cout<<"first="<<"source="<<source<<" dist="<<mx<<nn;
 qq.push({0,source});
    memset(visited,0,sizeof(visited));
    memset(dist,0,sizeof(dist));
    mx=0;
    while(!qq.empty())
    {
       
        ll node=qq.top().ss;
        ll d=qq.top().ff;
        visited[node]=1;
        //cout<<"node="<<node<<" dist="<<d<<nn;
        qq.pop();
        for(auto x:adj[node])
        {
            if(1+dist[node]>dist[x] && !visited[x])
            {
                dist[x]=1+dist[node];
                qq.push({dist[x],x});
                if(dist[x]>mx && clr[x]==1)
                {
                    source=x;
                    mx=dist[x];
                }
            }
        }
    }
    //cout<<"first="<<"source="<<source<<" dist="<<mx<<nn;
    cout<<(mx+1)/2<<nn;}
    return 0;
}
