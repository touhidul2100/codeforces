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
    ll n, i,m,a,b, j, k,mxx,mnn, sm = 0;
cin>>n>>m>>mnn>>mxx;
vl v(m);read(v,m);sort(all(v));
// show(v);
if((n-m)>=2)
{
    cout<<"Correct"<<nn;
}
else 
{
    if(((mxx==v[m-1])||(mnn==v[0]))||((mxx==v[m-1])&&(mnn==v[0])))
     cout<<"Correct"<<nn;
     else 
     cout<<"Incorrect"<<nn;
}
// else 
// {
//       if(mx==v[m-1] && mn==v[0])
//      cout<<"Correct"<<nn;
//      else 
//      cout<<"Incorrect"<<nn;
// }
   } return 0;
}
