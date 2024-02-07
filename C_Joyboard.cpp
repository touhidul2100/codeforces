#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m>>k;
    if(k>3)
    {
        cout<<0<<nn;
        continue;
    }
    if(k==3)
    {
        if(m<=n)cout<<0<<nn;
        else 
        {
            ll t1=m-n;
            ll t2=(t1/n);
            ll ans=(t2*(n-1));
            ans+=(t1%n);
            cout<<ans<<nn;
        }
    }
    else if(k==2)
    {
        ll ans=min(n,m);
        if(m>n){
          ll t1=m-n;
            ll t2=(t1/n);
            ans+=t2;}
            cout<<ans<<nn;
    }
    else if(k==1)
    {
        cout<<1<<nn;
    }}
    return 0;
}
