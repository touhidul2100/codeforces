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
#define inf 1e9+7
vector<ll> adj[100005];
ll high[100005];
bool visited[100005];
ll dist[100005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, m, i, j, k, q, sm = 0;
        cin >> n >> m;
          for(i=1;i<=n;i++)
        adj[i].clear();
       
        for (i = 1; i <= n; i++)
            cin >> high[i];
        for (i = 1; i <= m; i++)
        {
            cin >> j >> k;
            adj[j].pb(k);
            adj[k].pb(j);
        }
        cin >> q;
        for (i = 1; i <= q; i++)
        {
            ll a, b, c;
            cin >> a >> b >> c;
             memset(dist, inf, sizeof(dist));
            dist[a] = 0;
            queue<ll> qq;
            qq.push(a);
            while (!qq.empty())
            {
                ll node = qq.front();
                qq.pop();
                for (auto x : adj[node])
                {
                    if (((dist[node] + (high[x] - high[node])) < dist[x]) && ((dist[node] + (high[x] - high[node])) <= c))
                    {
                        dist[x] = dist[node] + (high[x] - high[node]);
                        qq.push(x);
                    }
                }
            }
            if (dist[b] <= c)
            {
                cout << "YES" << nn;
            }
            else
                cout << "NO" << nn;
        }
        cout << nn;
      
    }
    return 0;
}
