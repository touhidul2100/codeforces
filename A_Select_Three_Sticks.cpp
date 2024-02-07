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
 ll n,j,i,ans=1e9+1;
 cin>>n;
 vl v(n), v1;
 read(v,n);sort(all(v));
 for(i=1;i<n;i++)
 {
    v1.pb(v[i]-v[i-1]);
 }
 for(i=0;i<v1.size()-1;i++)
 {
    ans=min(ans,v1[i]+v1[i+1]);
 }
 cout<<ans<<nn;}
    return 0;
}

