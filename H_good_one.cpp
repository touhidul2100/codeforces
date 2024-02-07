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
#define N 100005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
fileread("hps.in");
filewrite("hps.out");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    ll ara[n+5][3];
    for(i=0;i<=n;i++)for(j=0;j<3;j++)ara[i][j]=0;
    for(i=1;i<=n;i++)
    {
        char c;cin>>c;
        ll tm;
        if(c=='H')tm=0;else if(c=='S')tm=1;else tm=2;
        for(j=0;j<3;j++)ara[i][j]=ara[i-1][j];
        ara[i][tm]++;
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        ll b1=0,b2=0;
        for(j=0;j<3;j++)
        {
            ll t1=ara[i][j];b1=max(b1,t1);
            ll t2=ara[n][j]-ara[i][j];b2=max(b2,t2);
            
        }
        ans=max(ans,b1+b2);
    }
   cout<<ans<<nn;
   } return 0;
}
