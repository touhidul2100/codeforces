#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
bool ans(ll r1,ll r2,ll i,ll j,vector<string>v)
{
bool f=1;
for(ll r=r1;r<=r2;r++)
{
    for(ll c=i;c<=j;c++)
    {
        if(v[r][c]=='1'){f=0;break;}
    }if(!f)break;
}
return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    vector<string>v(n+5);for(i=0;i<n;i++)cin>>v[i];
    vl row[n+5];
    ll final=0;
    for(i=n-1;i>=0;i--)
    {
       
       for(ll i1=0;i1<m;i1++)
       {
        for(ll j1=i1;j1<m;j1++)
        {
            for(j=0;j<=i;j++)
            {
               if(ans(j,i,i1,j1,v))
               {
                
                    ll tn=2*(j1-i1+1+i-j+1);
                 //   cout<<"r1="<<j<<" r2="<<i<<" c1="<<i1<<" c2="<<j1<<" tn="<<tn<<nn;
                    final=max(final,tn);
               }
            }
        
       }}
    }
    cout<<final<<nn;
    return 0;
}
