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
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k,mn,mx;
     cin>>n>>mn>>mx>>k;
     vl v(n);read(v,n);
     ll ans=0;
     for(i=1;i<pow(2,n);i++)
     {
        ll mn1=inf;
        ll mx1=-inf;
        ll sm=0;
        for(j=0;j<n;j++)
        {
            if((1<<j)&i)
            {
                mn1=min(mn1,v[j]);
                mx1=max(mx1,v[j]);
                sm+=v[j];
            }
        }
        if(sm>=mn && sm<=mx && mx1-mn1>=k)ans++;
     }
     cout<<ans<<nn;
   } return 0;
}
