#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
ll n,k,i,j,x,y;
cin>>n>>k;
vector<pair<ll,ll>>v;
for(i=0;i<n;i++)
{
    pair<ll,ll>p;
    cin>>x>>y;
    p=make_pair(x,y);
    v.push_back(p);
}
map<ll,ll>mp,m;
for(j=0;j<n;j++)
{
    if(v[j].first<=k&&v[j].ss>=k){
for(i=v[j].ff;i<=v[j].ss;i++)
{
    mp[i]++;
}}
}
ll f=0;
for(i=0;i<=50;i++)
{

if(mp[i]>=mp[k])
{
    f++;
}
}
if(f>1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;}
    return 0;
}


