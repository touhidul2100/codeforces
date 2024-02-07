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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;vl v(n);read(v,n);cin>>k;
    for(i=n-2;i>=0;i--)
    {
        v[i]=min(v[i],v[i+1]);
    }
    
    ll ans[n];for(i=0;i<n;i++)ans[i]=0;
    ll tm,tm2=k/v[0];
    for(i=0;i<n;i++)
    {
    if(i==0)tm=v[i];
    else tm=v[i]-v[i-1];
    if(tm>0)
    {
        tm2=min(k/tm,tm2);
    }
    k-=(tm2*tm);
    ans[i]=tm2;
    }
    for(i=0;i<n;i++)cout<<ans[i]<<" ";cout<<nn;}
    return 0;
}
