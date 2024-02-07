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
 ll n,sum1=0,sum2=0,i;
 cin>>n;
 vl v(n);
 read(v,n);
for(i=0;i<n;i++)
{
    if(v[i]%2==0)sum1+=v[i];
    else sum2+=v[i];
}
if(sum1>sum2)cout<<"YES"<<endl;
else cout<<"NO"<<endl;}
    return 0;
}

