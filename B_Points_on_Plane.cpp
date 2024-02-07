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
ll n;
cin>>n;
if(n<2){cout<<0<<endl;continue;}
ll l=1000000000,f=1;
while(f<=l)
{
   ll tem=f+(l-f)/2;
   if((tem*tem)==n)
   {
    cout<<tem-1<<endl;break;
   }
   else  if(tem*tem<n&&(tem+1)*(tem+1)>n)
    {
        cout<<tem<<endl;break;
    }
    
    else if(tem*tem<n)
    {
        f=tem+1;
    }
    else if(tem*tem>n)
    {
        l=tem;
    }
    
}}
    return 0;
}
