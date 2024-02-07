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
    ll test;
    cin>>test;
    while(test--){
ll n,i,j,m,d,x;
cin>>n>>m>>d;
map<ll,ll>mp;
for(i=1;i<=n;i++)
{
cin>>x;
mp.insert({x,i});
}
vl v(m);read(v,m);
ll ans=1000000001;
for(i=0;i<m-1;i++)
{
    ll a=mp[v[i]],b=mp[v[i+1]];
    
    if(a>=b||b>a+d)
    {
        ans=0;break;
    }
    ans=min(ans,b-a);
   ll swapneed=a+d-b+1;
  ll swappossible=(a-1)+(n-b);
  if(swappossible>=swapneed)
  ans=min(ans,swapneed);
}
cout<<ans<<endl;
    }
    return 0;
}

