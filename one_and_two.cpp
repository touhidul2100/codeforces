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
ll sum(ll v[ ],ll l,ll r)
{
    ll sm=0;
    for(ll i=l;i<=r;i++)
    {
        if(v[i]==2)
        sm+=v[i];
    }
    return sm;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
    ll n,i,j,ans=-1;
    cin>>n;
ll v[n];
for(i=0;i<n;i++)
{
    cin>>v[i];
}
for(i=0;i<n-1;i++)
{
    if(sum(v,0,i)==sum(v,i+1,n-1))
    {
        ans=i+1;break;
    }
}
cout<<ans<<endl;
}
    return 0;
}

