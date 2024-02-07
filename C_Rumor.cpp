#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
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
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
 vector<ll> adj[100005];
  bool visited[100005];
  set<ll>st;
void dfs(ll i,ll n,ll ara[])
{
   
    st.insert(ara[i]);
    visited[i]=1;
    for(auto x:adj[i])
    {
        if(!visited[x])
        {
            // st.insert(ara[x]);
            // visited[x]=1;
            dfs(x,n,ara);
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
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> m;
    ll ara[n + 1];
    for (i = 1; i <= n; i++)
        cin >> ara[i];
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
   
    for (i = 1; i <= n; i++)
        visited[i] = 0;
        ll ans=0;
    for (i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            st.clear();
            dfs(i,n,ara);
           auto it=st.begin();
           ans+=(*it);
            
        }
    }
    cout<<ans<<nn;

    return 0;
}
