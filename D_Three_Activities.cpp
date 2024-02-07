#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
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
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
cin>>n;vector<pl>v1(n),v2(n),v3(n);
for(i=0;i<n;i++)
{
    cin>>a;
    v1.pb({a,i});
}
for(i=0;i<n;i++)
{
    cin>>a;
    v2.pb({a,i});
}
for(i=0;i<n;i++)
{
    cin>>a;
    v3.pb({a,i});
}
sort(all(v1),[](pl &a,pl &b)
{
    return (a.ff==b.ff)?(a.ss<b.ss):(a.ff>b.ff);
});
sort(all(v2),[](pl &a,pl &b)
{
    return (a.ff==b.ff)?(a.ss<b.ss):(a.ff>b.ff);
});
sort(all(v3),[](pl &a,pl &b)
{
    return (a.ff==b.ff)?(a.ss<b.ss):(a.ff>b.ff);
});
ll ans=0;
for(i=0;i<3;i++)
{
    ll tm=v1[i].ff;
    for(j=0;j<3;j++)
    {
        if(v1[i].ss==v2[j].ss)continue;
       ll tm2=v2[j].ff+tm;
        for(k=0;k<3;k++)
        {
           
            if(v3[k].ss==v1[i].ss||v3[k].ss==v2[j].ss)continue;
             ll tm3=tm2+v3[k].ff;
            ans=max(ans,tm3);
        }
    }
}
cout<<ans<<nn;
   } return 0;
}
