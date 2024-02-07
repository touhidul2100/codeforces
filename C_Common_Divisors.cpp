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
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;vl v(n);read(v,n);sort(all(v));
    ll gd=v[0];
    for(i=1;i<n;i++)
    {
        gd=__gcd(gd,v[i]);
    }
    ll cnt=0;
   // cout<<"gd="<<gd<<nn;
    for(i=1;i<sqrt(gd);i++)
    {
        // cout<<"i="<<i<<nn;
        if(gd%i==0)cnt+=2;
    }
    if(sqrt(gd)*sqrt(gd)==gd)cnt++;
    cout<<cnt<<nn;
    return 0;
}
