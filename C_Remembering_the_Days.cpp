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
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define ok cout << "OK" << nn;

vector<int> adj[11];
ll cost[11][11];
bool visited[11];
ll ans = 0;
void dfs(ll node, ll sm)
{
    visited[node] = 1;
    ans = max(ans, sm);
    for (auto x : adj[node])
    {
        if (!visited[x] && cost[node][x] > 0)
        {
            dfs(x, sm + cost[x][node]);
        }
    }
    visited[node] = 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    ll inf = 1e9 + 7;
    for (i = 0; i < 11; i++)
    {
        adj[i].clear();
        visited[i] = 0;
    }
    for (i = 0; i < 11; i++)
        for (j = 0; j < 11; j++)
            cost[i][j] = 0;
    cin >> n >> m;

    for (i = 0; i < m; i++)
    {
        cin >> a >> b >> k;
        adj[a].pb(b);
        adj[b].pb(a);
        cost[a][b] = k;
        cost[b][a] = k;
    }
    for (i = 1; i <= n; i++)
        dfs(i, 0);
    cout << ans << nn;
    ans = 0;
    return 0;
}
