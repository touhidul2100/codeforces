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
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    map<ll,ll>mp;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    ll cnt=0;
    for(auto x:mp)
    {
        a=x.ff;b=x.ss;
        if(a==b)continue;
        else if(a>b)cnt+=b;
        else cnt+=(b-a);
       // cout<<"a="<<a<<" b="<<b<<" cnt="<<cnt<<nn;
    }
    cout<<cnt<<nn;
    return 0;
}
