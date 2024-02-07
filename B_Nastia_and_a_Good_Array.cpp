#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pl pair<ll,ll>
#define vpl vector<pair<ll,ll>>
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define inf 1e18
#define ok cout << "OK" << nn;
ll backi(ll n,ll n1)
{
    ll x=n;
    for(ll i=n;;i++)
    {
        if(__gcd(n,i)==1 && __gcd(n1,i)==1)
        {
            x=i;break;
        }
    }
    return x;
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
    vl v(n+1);for(i=1;i<=n;i++)cin>>v[i];
     vpl v1,v2;
     ll ini=v[1];
    for(i=1;i<n;i++)
    {
        v1.pb({i,i+1});
        ll tm=backi(min(v[i],v[i+1]),ini);
        v2.pb({tm,min(v[i],v[i+1])});
        v[i+1]=min(v[i],v[i+1]);
        ini=tm;
        
    }
    cout<<v1.size()<<nn;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i].ff<<" "<<v1[i].ss<<" "<<v2[i].ff<<" "<<v2[i].ss<<nn;
    }}
    return 0;
}
