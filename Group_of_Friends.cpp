#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
set<ll> adj[100005];
bool visited[100005];
ll spf[100005];
ll mm=100005;
void dv()
{
    for(ll i=1;i<mm;i++)spf[i]=i;
    for(ll i=2;i<mm;i+=2)spf[i]=2;
    for(ll i=3;i<mm;i+=2)
    {
        if(spf[i]==i)
        {
            for(ll j=i*i;j<mm;j+=i)
            {
                if(spf[j]==j)spf[j]=i;
            }
        }
    }

}
void dfs(ll node)
{
   // cout<<"when node="<<node<<nn;
    visited[node]=1;
    for(auto x:adj[node])
    {
        
       
        if(!visited[x])dfs(x);
    }
   // cout<<"end node="<<node<<nn<<nn;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    dv();
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    vl v(n);read(v,n);
    set<ll>st;
     for(i=1;i<100005;i++)visited[i]=0,adj[i].clear();
    for(i=0;i<n;i++)
    {
        ll tm=v[i];
        if(tm!=1)st.insert(tm);
        while(tm!=1)
        {
            
            adj[spf[tm]].insert(v[i]);
             adj[v[i]].insert(spf[tm]);
            st.insert(spf[tm]);
            ll t2=spf[tm];
             while(tm%t2==0)tm/=t2;
            
        }
    }
   
    ll cnt=0;
    for(auto it=st.begin();it!=st.end();it++)
    {
        ll tm=*it;
     if(!visited[tm])
     {
        cnt++;
        dfs(tm);
     }
    }
    
cout<<cnt<<nn;
    return 0;
}
