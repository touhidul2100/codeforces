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
vector<pair<ll,ll>>vp[200005];
bool visited[200005];
ll dp[200005];
void DFS(ll node,ll index)
{
    visited[node]=1;
    for(ll i=0;i<vp[node].size();i++)
    {
        ll sbnode=vp[node][i].ff;
        ll sbindex=vp[node][i].ss;
        if(visited[sbnode]==0)
        {
            dp[sbnode]=(sbindex<index)+dp[node];
            DFS(sbnode,sbindex);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n,i,j,k, sm = 0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>j>>k;
        vp[j].pb({k,i});
        vp[k].pb({j,i});
    }
    for(i=1;i<=n;i++){visited[i]=0;}
    dp[1]=0;
    DFS(1,n);
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        ans=max(ans,dp[i]);
       // cout<<i<<" "<<dp[i]<<nn;
    }
cout<<ans<<nn;
for(i=1;i<=n;i++)vp[i].clear();

}
    return 0;
}
