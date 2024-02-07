#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{

ll t;
cin>>t;
while(t--){
    ll c1 =0;
    ll c2 = 0;
   ll zro=0;
    ll n, i, j;
    cin >> n;
    vl v(n);
    read(v, n);
    ll ans=INT_MIN;
    ll sm=0;
    ll mxx=INT_MIN;
    for (i = 0; i < n; i += 2)
    {
       if(v[i]>0)
       {
        sm+=v[i];
       }
       mxx=max(mxx,v[i]);
    }
    if(sm==0)sm=mxx;
    ans=max(ans,sm);

 sm=0;
     mxx=INT_MIN;
    for (i = 1; i < n; i += 2)
    {
       if(v[i]>0)
       {
        sm+=v[i];
       }
       mxx=max(mxx,v[i]);
    }
    if(sm==0)sm=mxx;
    ans=max(ans,sm);
    cout<<ans<<nn;}
    return 0;
}
