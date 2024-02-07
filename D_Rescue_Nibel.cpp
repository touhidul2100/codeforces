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
#define N 300005
#define ok cout << "OK" << nn;
ll fact[300005];
ll md=998244353;
void forfact()
{
    fact[1]=1;
    fact[0]=1;
    for(ll i=2;i<N;i++)
    {
        fact[i]=(fact[i-1]*i)%md;
    }
}
ll power(ll b,ll p)
{
ll result=1;
b%=md;
while(p>0)
{
    if(p&1)
    result=(result*b)%md;
    p=p>>1;
    b=(b*b)%md;
}
return result%md;
}
ll ncr(ll n,ll r)
{
    if(r>n)return 0;
ll ans=fact[n]%md;
ll a1=(power(fact[r],md-2))%md;
ll a2=(power(fact[n-r],md-2))%md;
ans=(ans*a1)%md;
ans=(ans*a2)%md;
return ans%md;
}
int main()
{
Optimization();
forfact();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
  //  cout<<fact[300000]<<nn;
cin>>n>>m;
vl v1,v2;
for(i=0;i<n;i++)
{
    cin>>a>>b;
    v1.pb(a);v2.pb(b);
}
sort(all(v1));
sort(all(v2));


ll cnt=0;
ll pv=0,ans=0;i=0;j=0;
while(i<n && j<n)
{
    if(v1[i]<=v2[j])
    {
         if(cnt>=m-1)
         {
            ans=(ans+ncr(cnt,m-1))%md;
         }
        cnt++;
        i++;
    }
    else 
    {
        cnt-=1;
        j++;
        pv=cnt;
       // cout<<"in minus pv="<<pv<<endl;
    }
   
}
cout<<ans<<nn;
   } return 0;
}
