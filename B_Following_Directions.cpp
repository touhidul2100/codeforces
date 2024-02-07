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
        ll n,a1=0,a2=0;
string st,s;
cin>>n>>st;
bool f=0;
for(ll i=0;i<n;i++)
{
  if(st[i]=='L')a1--;
  else if(st[i]=='R')a1++;
  else if(st[i]=='U')a2++;
  else if(st[i]=='D')a2--;
  if(a1==1 &&a2==1)
  {
    cout<<"YES"<<endl;
    f=1;break;
  }


}
if(!f) cout<<"NO"<<endl;}



    return 0;
}

