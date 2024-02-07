#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
 ll n,s,r,i,sm=0;
 cin>>n>>s>>r;
 vl v;
 n-=1;
 ll d=r/n;
 
 for(i=1;i<n;i++)
 {
    v.push_back(d);
    sm+=d;


 }
 
if(r-sm>s-r)
{
d=(r-sm)-(s-r);
ll tm=d;
while(d!=0)
{
   for(i=0;i<v.size();i++)
   {
      v[i]+=1;
      d--;
      if(d==0)break;
      if(i==v.size()-1 && d>0)i=0;
   }
}

v.push_back(r-sm-tm);v.push_back(s-r);
}
else
{v.pb(r-sm);v.pb(s-r);}

 show(v);cout<<nn;
    }
    return 0;
}

