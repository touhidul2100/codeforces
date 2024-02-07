#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 100005
#define ok cout << "OK" << nn;
ll n;
vl adj[N];
bool visited[N];
ll ans[N];
ll md = 1e9 + 7;
ll dfs(ll node, ll par)
{
   
    visited[node] =1;
    ll total=0;
    for (auto x : adj[node])
    {
        if(x==par)continue;
        if(x==n){ total+=1;total%=md;}
       else if(visited[x])
        {
           total+=ans[x];
           total%=md;
        }
        else 
        {
            total+=dfs(x,node);
            total%=md;
        }
    }
    ans[node]=total;
    ans[node]%=md;
    return ans[node];
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll i, m, a, b, j, k, sm = 0;
        cin >> n >> m;
        for (i = 0; i < m; i++)
        {
            cin >> a >> b;
            adj[a].pb(b);
            // adj[b].pb(a);
        }
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
            ans[i] = 0;
        }
        ll an=dfs(1,0);
        cout<<an<<nn;
    }
    return 0;
}
