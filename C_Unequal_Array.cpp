#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " "; cout << endl;}
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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j,x, k, sm = 0;
cin>>n;
vl v(n);read(v,n);
ll mx=-1,mn=-1;
for(i=0;i<n-1;i++)
{
    if(v[i]==v[i+1])
    {
        if(mn==-1)mn=i;
        mx=i;
    }
}
ll ab=mx-mn-1,as=1;
if(mx==mn)cout<<0<<nn;
else cout<<max(as,ab)<<nn;
}
    return 0;
}
