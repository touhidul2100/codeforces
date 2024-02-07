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
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
cin>>n>>k;
ll ara[n+1],pos[n+1];
for(i=1;i<=n;i++)
{
cin>>ara[i];
pos[ara[i]]=i;
}
ll ans=1;
for(i=1;i<n;i++)
{
    if(pos[i]>pos[i+1])ans++;
}
while(k--)
{
    cin>>a>>b;
    set<pair<ll,ll>>st;
    if(ara[a]+1<=n)st.insert({ara[a],ara[a]+1});
    if(ara[a]-1>0)st.insert({ara[a]-1,ara[a]});
    if(ara[b]+1<=n)st.insert({ara[b],ara[b]+1});
    if(ara[b]-1>0)st.insert({ara[b]-1,ara[b]});
    for(auto x:st)
    ans-=(pos[x.ff]>pos[x.ss]);
    swap(ara[a],ara[b]);
    pos[ara[a]]=a;
    pos[ara[b]]=b;
     for(auto x:st)
    ans+=(pos[x.ff]>pos[x.ss]);
    cout<<ans<<nn;
}
   } return 0;
}
