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
    ll i,j,n,sum=0,q,l,r,k;
 cin>>n>>q;

 vl v(n),v5(n);
 read(v,n);
 v5=v;
 ll pre[n+1],suf[n+1];
 pre[0]=v[0];
 for(i=1;i<n;i++)
 {
    pre[i]=v[i]+pre[i-1];
 }
 suf[n-1]=v5[n-1];
 suf[n]=0;
 for(i=n-2;i>=0;i--)
 {
    suf[i]=v5[i]+suf[i+1];
 }
 pre[0]=v[0];
 suf[n]=0;
for(i=0;i<q;i++)
{
cin>>l>>r>>k;
if(l>1)
sum=pre[l-2]+suf[r]+((r-l+1)*k);

else if(l==1)
sum=suf[r]+((r-l+1)*k);
// cout<<pre[0]<<endl;
// cout<<pre[l-2]<<" "<<suf[r]<<endl;
 //cout<<sum<<endl;
if(sum%2==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
sum=0;}}

    return 0;
}

