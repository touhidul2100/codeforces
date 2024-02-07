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
    ll i,j,k,n,mx=1,var=1;
    cin>>n;
string st;
cin>>st;
set<char>s;
ll v1[n],v2[n];
for(i=0;i<n;i++)
{
  s.insert(st[i]);
  v1[i]=s.size();
}
s.clear();
for(i=n-1;i>=0;i--)
{
  s.insert(st[i]);
 v2[i]=s.size();
}

ll ans=1,sm;

  for(i=0;i<n-1;i++)
  {
    sm=v1[i]+v2[i+1];
    ans=max(sm,ans);
  }
 cout<<ans<<endl;}
     return 0;
}

