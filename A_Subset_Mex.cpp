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
    ll n, i,m,a,b, j, k, sm = 0;
cin>>n;
ll f[105];
for(i=0;i<105;i++)f[i]=0;
vl v1,v2;
for(i=0;i<n;i++)
{
    cin>>a;
    if(f[a]==0)
    {
        v1.pb(a);
        f[a]=1;
    }
    else if(f[a]==1)
    {
        v2.pb(a);
        f[a]=2;
    }
}
sort(all(v1));
sort(all(v2));
ll a1=0,a2=0;
for(i=0;i<v1.size();i++)
{
    if(v1[i]!=i)
    {
        a1=i;
        break;
    }
    else if(i==v1.size()-1)
    {
        a1=i+1;
    }
}
for(i=0;i<v2.size();i++)
{
    if(v2[i]!=i)
    {
        a2=i;
        break;
    }
    else if(i==v2.size()-1)
    {
        a2=i+1;
    }
}
cout<<a1+a2<<nn;
   } return 0;
}
