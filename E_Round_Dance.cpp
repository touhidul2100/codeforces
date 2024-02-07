#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
vector<ll> adj[200005];
ll visited[200005];
bool hashcycle;
void DFS(ll node, ll par)
{
    //cout<<"node="<<node<<" par="<<par<<nn;
    visited[node] = 1;
    for (auto x : adj[node])
    {
        if (x == par)
            continue;
       
        if (visited[x] == 0)
        {
            DFS(x, node);
        }
     else if (visited[x] == 1)
        {
           // cout<<"x="<<x<<" node="<<node<<nn;
            hashcycle = 1;
        }
       
    }
   
    visited[node]=2;
    // cout<<" node="<<node<<" "<<visited[node]<<nn;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll i, n, j, k, sm = 0, mn = 0, mx = 0;
    //  for(i=0;i<=n;i++)adj[i].clear();
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> j;
        adj[i].pb(j);
        adj[j].pb(i);
    }
    // for(i=1;i<=n;i++)
    // {
    //     sort(all(adj[i]));
    //     auto it=unique(all(adj[i]));
    //     adj[i].resize(distance(adj[i].begin(),it));
    // }
    for (i = 0; i <= 200005; i++)
        visited[i] = 0;
    for (i = 1; i <= n; i++)
    {
      //  cout<<"for i="<<i<<nn;
        hashcycle=0;
        if (visited[i] == 0)
        {
            mx++;
            DFS(i, -1);
        }
        if(hashcycle)mn++;
       // cout<<"hs="<<hashcycle<<" mn="<<mn<<nn;
       
    }
    if (mn<mx)
        mn++;
    cout << mn << " " << mx << nn;
    for(i=1;i<=n;i++)adj[i].clear();}
    return 0;
}
