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
#define N 200005
#define ok cout << "OK" << nn;
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
        ll n, i, m, a, b, c, j, k, sm = 0;
        cin >> n >> m;
        vl adj[n+1];
ll dist[n+1];
        map<pair<ll, ll>, ll> mp;
        for (i = 0; i < m; i++)
        {
            cin >> a >> b >> c;
            adj[a].pb(b);
            if(mp[{a,b}]!=0)
                 mp[{a, b}] =min(c,mp[{a,b}]);
                 else mp[{a,b}]=c;

            
        }
    memset(dist,0x3f,sizeof(dist));
        dist[1] = 0;
        priority_queue<pair<ll,ll>, vpl, greater<pl>> qq;
        qq.push({0,1});
       
        while (!qq.empty())
        {
            ll node = qq.top().ss;
            ll dd=qq.top().ff;
            qq.pop();
             if(dd>dist[node]){cout<<"node="<<node<<" dd="<<dd<<" dist="<<dist[node]<<nn; continue;}
            for (auto x : adj[node])
            {
                if (dd+ mp[{node, x}] < dist[x])
                {
                    dist[x] = dd+ mp[{node, x}];
                    cout<<"x="<<x<<" dist="<<dist[x]<<nn;
                    qq.push({dist[x],x});
                }
            }
        }
        for (i = 1; i <= n; i++)
            cout << dist[i] << " ";
        cout << nn;
    }
    return 0;
}
