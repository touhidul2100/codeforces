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
vl adj[N];
ll ans = 1;
bool visited[N];

void dfs(ll node)
{
    visited[node] = 1;
    ll cnt = 0;
    bool f1 = 0;
    for (auto x : adj[node])
    {
        if (!visited[x])
        {
        
            if(!f1){f1=1;}
            else{cnt++; }
            dfs(x);
            
        }
    }
   
        ans +=cnt;
    
   // cout<<"end of node="<<node<<" cnt="<<cnt<<nn;
    // cnt = 0;
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k;
        cin >> n;
        ans = 1;
        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
            adj[i].clear();
        }

        for (i = 1; i < n; i++)
        {
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        ll ind = 1;
        for (i = 1; i <= n; i++)
        {
            if (adj[i].size() == 1)
            {
                ind = i;
                break;
            }
        }
      // cout<<"ind="<<ind<<nn;
        dfs(ind);
        // if (!f)
        //     ans++;
        cout << 1+ans/2 << nn;
    }
    return 0;
}
