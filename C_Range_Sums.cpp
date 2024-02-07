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
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n,q, i,m,a,b, j, k;
    cin>>n>>q;
    vpl vp;
    for(i=0;i<q;i++)cin>>a>>b,vp.pb({a,b});
    sort(vp.begin(),vp.end(),[](pl &a,pl &b)
    {
        return (a.ff==b.ff)?(a.ss>b.ss):(a.ff<b.ff);
    });
    ll l=0,r=0;
    ll bl=0,br=0;
    bool f=1;
    for(auto x:vp)
    {
        if(x.ff>r+1)
        {
            f=0;break;
        }
        
    }
   } return 0;
}
