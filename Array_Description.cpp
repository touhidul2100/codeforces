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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j,x, k, sm = 0;
    cin>>n>>m;
    ll dp[n+1][m+1];
    for(i=0;i<=n;i++)for(j=0;j<=m;j++)dp[i][j]=0;
    cin>>x;
    if(x==0)
    {
        for(i=1;i<=m;i++)dp[1][i]=1;
    }
    else 
    dp[1][x]=1;
   // cout<<dp[1][5]<<nn;
   ll md=1e9+7;
    for(i=2;i<=n;i++)
    {
        cin>>x;
        if(x==0)
        {
            for(j=1;j<=m;j++)
            {
                for(k=j-1;k<=j+1;k++)
                {
                    if(k>=1 && k<=m)
                    {
                        dp[i][j]+=dp[i-1][k];
                        dp[i][j]%=md;
                    }
                }
            }
        }
        else
        {
            for(k=x-1;k<=x+1;k++)
            {
                if(k>=1 && k<=m)
                {
                    dp[i][x]+=dp[i-1][k];
                    dp[i][x]%=md;
                }
            }
        }
    }
    ll ans=0;
    for(i=1;i<=m;i++){ans+=dp[n][i];ans%=md;}
    cout<<ans<<nn;
    return 0;
}
