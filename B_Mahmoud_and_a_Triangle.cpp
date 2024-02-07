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
    // ll test;
    // cin>>test;
    // while(test--){
ll n;
cin>>n;
vl v(n);read(v,n);sort(all(v));
bool f=0;
for(ll i=n-1;i>1;i--)
{
if(v[i]<v[i-1]+v[i-2])
{
    f=1;break;
}
}
 if(f)cout<<"YES"<<nn;
 else cout<<"NO"<<nn;
    return 0;
}

