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
    ll n, i, j, k, sm = 0;
cin>>n;
vl v(n);read(v,n);sort(all(v));
ll odd=0,even=0;
vl ev,od;
for(i=0;i<n;i++)
{
    if(v[i]&1){odd++;od.pb(v[i]);}
    else{ even++;ev.pb(v[i]);}
}
 if(ev.size()==n||od.size()==n)
{
    cout<<"YES"<<nn;
}
else if(odd>0&& ev[0]>od[0])
{
    cout<<"YES"<<nn;
}
else cout<<"NO"<<nn;}
    return 0;
}
