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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 100005
#define ok cout << "OK" << nn;
vector<ll> adj[N];
bool clr[N];
bool visited[N];
bool f = 0;
void dfs(ll node, ll par = 0)
{
    if (f)
        return;

    // cout<<"node="<<node<<" par="<<par<<nn;
    for (auto x : adj[node])
    {

        if (x != par)
        {
            if (!visited[x])
            {
                clr[x] = !clr[node];
                visited[x] = 1;
                dfs(x, node);
            }
            else if (clr[x] == clr[node])
            {
                // cout<<nn;
                // cout<<"Enter node="<<node<<" x="<<x<<nn<<nn;
                f = 1;
                return;
            }
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
    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
        clr[i] = 0;
    }
    clr[1] = 0;
    f = 0;
    for (i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            dfs(i);
        }
    }
    if (f)
        cout << "IMPOSSIBLE" << nn;
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (clr[i])
                cout << 2 << " ";
            else
                cout << 1 << " ";
        }
        cout << nn;
    }
    return 0;
}
