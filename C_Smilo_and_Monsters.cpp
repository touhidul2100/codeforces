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
cin>>n;vl v(n);read(v,n);sort(all(v));
sm=0;
i=0;j=n-1;
ll ans=0;
while(i<j)
{
    sm+=v[i];
    if(i>=j-1)break;
    if(sm>=v[j])
    {
        ans+=v[j];ans++;
        sm-=v[j];
        j--;
    }
    i++;
}
if(sm>=v[j])
{
    ans+=v[j]; ans+=1;
    sm-=v[j];
    ans+=sm/2;
    if(sm/2>=1)
   ans++;
    if(sm&1)ans++;
}
else 
{
    ll tm=(v[j]-sm);
    sm+=(tm/2);
    ans+=sm;if(sm>0)ans+=1;
    if(tm&1)ans++;
}
cout<<ans<<nn;
   } return 0;
}
