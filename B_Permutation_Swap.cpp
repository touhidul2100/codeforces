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
cin>>n;
vl v(n);
map<ll,ll>m1,m2,m3;
for(i=0;i<n;i++)
{
cin>>v[i];
m1[v[i]]=i+1;
}
for(i=0;i<n;i++)
{
m2[i+1]=i+1;
}
ll cnt=0,ans=0;
for(i=0;i<n;i++)
{
m3[abs(m1[i+1]-m2[i+1])]++;
}
ll gcd;
for(auto x:m3)
{
    gcd=x.first;break;
}
for(auto x:m3)
gcd=__gcd(gcd,x.first);
cout<<gcd<<nn;}
    return 0;
}
