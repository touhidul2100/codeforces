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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vl v(n),vt(n);read(v,n);sort(all(v));
    map<ll,ll>mp;
    for(i=0;i<n;i++)mp[v[i]]++;
    bool f=1;
    for(auto x:mp)
    {
        if(x.ss<2)
        {
            f=0;
        }
    }
if(!f)
{
    cout<<-1<<nn;
    continue;
}
vector<pair<ll,ll>>vp;
for(i=0;i<n;i++)
{
    vp.pb({v[i],i+1});
}
sort(all(vp));
vp.pb({0,0});
// for(auto x:vp)cout<<x.ff<<" "<<x.ss<<nn;
ll vf[n+1];
ll first=vp[0].ss;
// cout<<"first="<<first<<nn;
for(i=0;i<n;i++)
{
    
    if(vp[i].ff==vp[i+1].ff)
    {
        vf[vp[i].ss]=vp[i+1].ss;
        continue;
    }
    else
    {
        // cout<<"loop 2"<<nn;
        // cout<<"i="<<i<<nn;
        vf[vp[i].ss]=first;
        first=vp[i+1].ss;
    }
    // if(i==n-1)
    // {
    //     vf[vp[i].ss]=first;
    // }
}
// cout<<"first="<<first<<nn;
for(i=1;i<=n;i++)
cout<<vf[i]<<" ";cout<<nn;}
    return 0;
}
