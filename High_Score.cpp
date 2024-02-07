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
#define N 2000005
#define ok cout << "OK" << nn;
ll cost[3000][3000];
ll dist[3000];
vl adj[3000];
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
        vl v[m];
        for (i = 0; i < m; i++)
        {
            cin >> a >> b >> c;
            v[i] = {a, b, c};
            cost[a][b] = c;
        }
        ll pv[n+1];
        for (i = 2; i <= n; i++)
            dist[i] = -inf,pv[i]=-inf;
            dist[1]=0;
            pv[1]=0;
            bool f=1;
        for (j = 0; j <=n+5; j++)
        {
            for (i = 0; i < m; i++)
            {
                if(dist[v[i][0]]+cost[v[i][0]][v[i][1]]>dist[v[i][1]])
                {
                    pv[v[i][1]]=dist[v[i][1]];
                    dist[v[i][1]]=dist[v[i][0]]+cost[v[i][0]][v[i][1]];
                    if(j==n&&(v[i][1]==n||v[i][1]==1))f=0;
                }
                if(j==n &&(v[i][1]==n||v[i][1]==1)&&pv[v[i][0]]!=dist[v[i][0]])
                {
                    f=0;
                    // ok
                    // cout<<v[i][0]<<" "<<v[i][1]<<nn;
                    // cout<<"an="<<pv[v[i][0]]<<" "<<dist[v[i][0]]<<nn;
                }
                pv[v[i][0]]=dist[v[i][0]];
            }
        }
        for(i=1;i<=n;i++)cout<<"i="<<i<<" dist="<<dist[i]<<nn;
      if(f)cout<<dist[n]<<nn;
      else cout<<-1<<nn;
    }
    return 0;
}
