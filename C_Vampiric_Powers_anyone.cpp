#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
   cin>>n;vl v(n);read(v,n);
   ll mxvalue=1<<8;
   bool sign[mxvalue];memset(sign,0,sizeof(sign));
   sign[0]=1;
   ll curr=0;
   ll ans=0;
   for(i=0;i<n;i++)
   {
    curr^=v[i];
    // cout<<"i="<<v[i]<<endl;
    for(j=0;j<mxvalue;j++)
    {
        if(sign[j])
        {
            // cout<<"pref="<<j<<" in="<<(j^curr)<<endl;
            ans=max(ans,curr^j);
        }
    }
   // cout<<"true="<<curr<<nn;
    sign[curr]=1;
   }
   cout<<ans<<nn;}
    return 0;
}
