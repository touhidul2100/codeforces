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
vpl v1,v2;
ll dpp(ll i,ll j,set<ll>st1,set<ll>st2,ll n)
{
    if(i>=n ||j>=n)return 0;
    if(st1.count(i) && st2.count(j))
    {
        return dpp(i+1,j+1,st1,st2,n);
    }
     if(st1.count(i) && !st2.count(j))
    {
        return dpp(i+1,j,st1,st2,n);
    }
     if(!st1.count(i) && st2.count(j))
    {
        return dpp(i,j+1,st1,st2,n);
    }
    if(v1[i].ff<v2[j].ff && v1[i].ss<v2[j].ss &&(!st1.count(i) && !st2.count(j)))
    {
        ll b=dpp(i+1,j,st1,st2,n);
       ll c=dpp(i,j+1,st1,st2,n);
       ll d=dpp(i+1,j+1,st1,st2,n);
        st1.insert(i);st2.insert(j);
       ll a= 1+dpp(i+1,j+1,st1,st2,n);
       st1.erase(i);st2.erase(j);
       a=max(a,b);a=max(a,c);a=max(a,d);
       return a;
    }
  
        ll b=dpp(i+1,j,st1,st2,n);
       ll c=dpp(i,j+1,st1,st2,n);
       return max(c,b);
    
}
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
    cin>>n;
    for(i=0;i<n;i++){cin>>a>>b;v1.pb({a,b});}
    for(i=0;i<n;i++){cin>>a>>b;v2.pb({a,b});}
    // sort(all(v1));sort(all(v2));
    set<ll>st1,st2;
    ll ans=dpp(0,0,st1,st2,n);
    cout<<ans<<nn;
   } return 0;
}
