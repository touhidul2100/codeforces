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
#define nn '\n'
#define ok cout << "OK" << nn;
ll mem[100005][2];
ll par[100005];
vector<ll>adj[100005];
ll fun(ll node,ll guard)
{
    if(mem[node][guard]!=-1)
    return mem[node][guard];
    ll ans=guard;
    for(auto x:adj[node])
    {
        if(x==par[node])continue;
        par[x]=node;
        if(guard==0)
        {
            ans+=fun(x,1);
        }
        else 
        {
            ans+=min(fun(x,0),fun(x,1));
        }
    }
    mem[node][guard]=ans;
    return mem[node][guard];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>j>>k;
        adj[j].pb(k);
        adj[k].pb(j);
    }
    memset(mem,-1,sizeof(mem));
    memset(par,-1,sizeof(par));
    ll ans=min(fun(0,1),fun(0,0));
    cout<<ans<<nn;
    return 0;
}
