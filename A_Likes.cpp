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
    ll n,i,j;
    cin>>n;
 vl v(n);
read(v,n);

 ll l1=0,l2=0;
 for(i=0;i<n;i++)
 {
  if(v[i]>0)l1++;
  else if(v[i]<0)l2++;
 }

 for(i=1;i<=l1;i++)cout<<i<<" ";
 for(i=1;i<=l2;i++)cout<<--l1<<" ";
 cout<<endl;
 for(i=1;i<=l2;i++)cout<<1<<" "<<0<<" ";
 for(i=1;i<=n-2*l2;i++)cout<<i<<" ";
 cout<<endl;}
    return 0;
}

