#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
vector<ll>adj[200005];
vector<pair<ll,ll>>vp;
multiset<pair<ll,ll>>ms;
bool visited[100005];
void dfs(ll node,ll par)
{
visited[node]=1;
for(auto x:adj[node])
{
    
}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    for(i=1;i<n;i++)
    {
        cin>>j>>k;
        adj[j].pb(k);
        adj[k].pb(j);
    }
    for(i=0;i<m;i++)
    {
        cin>>j>>k;
        vp.pb({j,k});
    }
    
    return 0;
}
