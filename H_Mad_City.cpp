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
ll clr[200005];
set<ll> v;
ll par[200005];
ll dista[200005];
ll distb[200005];
// bool vis1[100005];
// bool vis2[100005];
void dfs(ll node, ll p)
{
    if (clr[node] == 2)
        return;
    if (clr[node] == 1)
    {
        ll cur = p;
        v.insert(cur);
        while (cur != node)
        {
            cur = par[cur];
            v.insert(cur);
        }
        return;
    }
    clr[node] = 1;
    par[node] = p;
    for (auto v : adj[node])
    {
        if (par[node] == v)
            continue;
        dfs(v, node);
    }
    clr[node] = 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> a >> b;
        k = n;
        while (k--)
        {
            cin >> i >> j;
            adj[i].pb(j);
            adj[j].pb(i);
        }
        for (i = 1; i <= n; i++)
            clr[i] = 0, dista[i] = INT_MAX, distb[i] = INT_MAX;
        dfs(1, 0);
        // show(v);
        dista[a] = 0;
        distb[b] = 0;
        priority_queue<ll, vl, greater<ll>> qa;
        qa.push(a);
        while (!qa.empty())
        {
            ll node = qa.top();

            qa.pop();
            for (auto v : adj[node])
            {
                // if(vis1[v]==0)
                // {
                if (dista[v] > dista[node] + 1)
                {
                    dista[v] = dista[node] + 1;
                    qa.push(v);
                }
                //}
            }
        }
        while (!qa.empty())
            qa.pop();
        qa.push(b);
        while (!qa.empty())
        {
            ll node = qa.top();

            qa.pop();
            for (auto v : adj[node])
            {
                // if(vis2[v]==0)
                // {
                if (distb[v] > distb[node] + 1)
                {
                    distb[v] = distb[node] + 1;
                    qa.push(v);
                }
                // }
            }
        }
        bool f = 0;
        for (i = 1; i <= n; i++)
        {
            if (v.count(i))
            {
                if (dista[i] > distb[i])
                    f = 1;
            }
        }
        if (f)
            cout << "YES" << nn;
        else
            cout << "NO" << nn;
            for(i=0;i<=n;i++)
            {
                adj[i].clear();
            }
            v.clear();
    }
    return 0;
}
