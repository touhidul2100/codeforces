#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
ll check(ll l,ll r)
{
    ll ans;
    if(l==r)return 0;
    cout<<"? "<<l<<" "<<r<<nn;
    cout.flush();
    cin>>ans;
    return ans;
}
ll dp(ll left,ll right)
{
    if(left==right)return left;
    ll tm=left+(right-left)/2;
    ll a=dp(left,tm);
    ll b=dp(tm+1,right);
    
    ll x=check(a,b-1);
    ll y=check(a,b);
    if(x==y)
    return b;
    else return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    ll ans=dp(1,n);
    cout<<"! "<<ans<<nn;
    cout.flush();}
    return 0;
}
