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
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, i, j, k, sm = 0;
cin>>n>>k;
vl v(n);read(v,n);sort(all(v));for(i=0;i<n;i++)sm+=v[i];
vl vf(n+1);
for(i=1;i<=n;i++)
{
    vf[i]=vf[i-1]+v[i-1];
}
ll ans=0;
for(i=0;i<=k;i++)
{
ans=max(ans,(vf[n-k+i]-vf[2*i]));
}
cout<<ans<<nn;}
    return 0;
}