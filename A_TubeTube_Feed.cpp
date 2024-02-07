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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
        ll n,t,i,j,sm=0;
cin>>n>>t;
vl v1(n+1),v2(n+1);
for(i=1;i<=n;i++)cin>>v1[i];
for(i=1;i<=n;i++)cin>>v2[i];
ll ans=-1,tm=0,t2=t;
for(i=1;i<=n;i++)
{
if(v1[i]<=t2 && tm<=v2[i])
{
ans=i;
tm=v2[i];
}
t2--;
}
cout<<ans<<nn;}
    return 0;
}

