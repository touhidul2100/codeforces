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
// ll sm(vl v,ll l,ll r)
// {
//     ll sum=0;
//     for(ll i=l;i<r;i++)
//     {
//         sum+=(v[i]-v[i+1]);
//     }
//     return sum;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
  ll n,cnt=0,i,j,tm=0;
  cin>>n;vl v(n);read(v,n);

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
       tm+=(v[j-1]-v[j]);
       if(tm!=(v[j]-v[i]))++cnt;
      // cout<<"i="<<i<<" j="<<j<<" tm="<<tm<<" ml="<<v[j]-v[i]<<" cnt="<<cnt<<nn;
    }
    tm=0;
  }
  cout<<cnt<<nn;}
    return 0;
}

