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
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b,c, j, k, sm = 0;
vector<pair<ll,char>>vp;
cin>>a>>b>>c;
vp.pb({a,'a'});
vp.pb({b,'b'});
vp.pb({c,'c'});

sort(all(vp));
// for(auto x:vp)cout<<x.ff<<" "<<x.ss<<nn;
if(vp[0].ff==vp[1].ff && vp[1].ff==vp[2].ff)
{
    cout<<1<<" "<<1<<" "<<1<<nn;
}
else if(vp[0].ff==vp[1].ff)
{
  cout<<(vp[2].ss=='a')<<" "<<(vp[2].ss=='b')<<" "<<(vp[2].ss=='c')<<nn;
}
else if(vp[2].ff==vp[1].ff)
{
    cout<<(vp[0].ss=='a')<<" "<<(vp[0].ss=='b')<<" "<<(vp[0].ss=='c')<<nn;
   
}
else 
{
    cout<<(vp[2].ss=='a')<<" "<<(vp[2].ss=='b')<<" "<<(vp[2].ss=='c')<<nn;
}
   } return 0;
}
