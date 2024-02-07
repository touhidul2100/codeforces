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
    ll n, i,m,a,b, j, k,c,d;
    cin>>i>>j>>a>>b>>c>>d;
   vector<pl>vp;
   vp.pb({i,j});vp.pb({-i,j});vp.pb({i,-j});vp.pb({-i,-j});
   vp.pb({j,i});vp.pb({-j,i});vp.pb({j,-i});vp.pb({-j,-i});
   ll ans=0;
   set<vpl>st;
   for(ll i1=0;i1<8;i1++)
   {
    for(ll j1=0;j1<8;j1++)
    {
        if((a+vp[i1].ff+vp[j1].ff==c)&&(b+vp[i1].ss+vp[j1].ss==d))
        {
            vector<pl>vv;
            vv.pb({vp[i1].ff,vp[i1].ss});
            vv.pb({vp[j1].ff,vp[j1].ss});
           
            st.insert(vv);
        }
    }

   }
  cout<<st.size()<<nn;
   } return 0;
}
