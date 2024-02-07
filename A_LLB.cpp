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
vector<ll> adj[200005];
bool visited[200005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> m;
    memset(visited, 0, sizeof(visited));
    set<ll> st[n + 1];
    for (i = 0; i < m; i++)
    {
        cin >> j >> k;
        adj[j].pb(k);
        st[k].insert(j);
    }
    for (i = 1; i <= n; i++)
    {
        for (auto x : adj[i])
        {
            if (!st[i].count(x))
            {
                visited[x] = 1;
                for (auto y : adj[x])
                   { visited[y] = 1;}
            }
        }
    }
       for (i = 1; i <= n; i++)
    {
        for (auto x : adj[i])
        {
            if (st[i].count(x)&& visited[x]==1) 
            {
                visited[i] = 1;break;
               // cout<<i<<nn;
               
            }
        }
    }
    bool f = 1;
    for (i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            f = 0;
            break;
        }
    }
    if (f)
        cout << "YES" << nn;
    else
        cout << "NO" << nn;
    for (i = 1; i <= n; i++)
    {
        adj[i].clear();
    }
    return 0;
}
