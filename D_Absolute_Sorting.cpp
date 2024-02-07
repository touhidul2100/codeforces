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
cin>>n;vl v(n);read(v,n);
ll add1=0,add2=0;bool f1=0;;
for(i=1;i<n;i++)
{
if(v[i]<v[i-1])
{
  
  if(!f1)
     add1=v[i]+(v[i-1]-v[i]+1)/2,f1=1;
      add2=max(add2,v[i]+(v[i-1]-v[i]+1)/2);
  
}
}
vl v1(n),v2(n);v1=v;v2=v;
for(i=0;i<n;i++)
{
    v1[i]=abs(v[i]-add1);
    v2[i]=abs(v[i]-add2);
}
bool f2=1,f3=1;;
for(i=1;i<n;i++)
{
    if(v1[i]<v1[i-1])
    {
        f2=0;break;
    }
}
for(i=1;i<n;i++)
{
    if(v2[i]<v2[i-1])
    {
        f3=0;break;
    }
}
if(f2)cout<<add1<<nn;
else if(f3)cout<<add2<<nn;
else cout<<-1<<nn;
   } return 0;
}
