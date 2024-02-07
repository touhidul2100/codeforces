#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";cout<<endl;
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
 ll n,i,j=0,sm=0;
 cin>>n;
 vl v(n);read(v,n);
 sm=accumulate(all(v),0ll);
 ll ans=1;
 for(i=0;i<n-1;i++)
 {
    j+=v[i];
    sm-=v[i];
    ans=max(ans,__gcd(j,sm));
 }
 cout<<ans<<nn;}
    return 0;
}

