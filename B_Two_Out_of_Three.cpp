#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
cin>>n;vl v(n);read(v,n);
map<ll,ll>mp;
for(i=0;i<n;i++)
{
    mp[v[i]]++;
}
ll cnt=0;
for(auto x:mp)
{
    if(x.ss>1)cnt++;
}
if(cnt<2)
{
    cout<<-1<<nn;
    continue;
}
mp.clear();
map<ll,vl>m2;
for(i=0;i<n;i++)
{
    m2[v[i]].pb(i);
}
cnt=0;
ll ba[n];
for(auto x:m2)
{
    if(cnt==0 && x.ss.size()>1)
    {
        
        ll tm=x.ss[0];
        ba[tm]=1;
        for(i=1;i<x.ss.size();i++)
        ba[x.ss[i]]=2;
        cnt++;
    }
   else if(cnt==1 && x.ss.size()>1)
    {
        
        ll tm=x.ss[0];
        ba[tm]=1;
        for(i=1;i<x.ss.size();i++)
        ba[x.ss[i]]=3;
        cnt++;
    }
    else 
    {
        for(i=0;i<x.ss.size();i++)
        ba[x.ss[i]]=3;
    }
}
for(i=0;i<n;i++)cout<<ba[i]<<" ";cout<<nn;
   } return 0;
}
