#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)         \
    for (auto &val : _a) \
        cout << val << " ";
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
   ll i,j,k,n,sum=1;
   cin>>n;
   vl v(n);
   read(v,n);
   sort(all(v));
   //show(v);cout<<endl;
   if(v[0]!=1)
   {
    cout<<"NO"<<endl;
   
    continue;
   }
   bool f=0;
   for(i=1;i<n;i++)
   {
    if(v[i]<=sum)
    {
        sum+=v[i];
    }
    else
    {
        cout<<"NO"<<endl;
        f=1;break;
    }
   }
   if(!f)cout<<"YES"<<endl;
    }
    return 0;
}
