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
    ll n, i,m,a,b, j, k, sm = 0;
    string st1,st2;
    cin>>st1>>st2;
    n=st1.size();m=st2.size();
    ll dp[n+1][m+1];
    for(i=1;i<=n;i++)for(j=1;j<=m;j++)dp[i][j]=dp[i][j]=INT_MAX;
    dp[0][0]=0;
    for(i=1;i<=n;i++)dp[i][0]=i;
    for(j=1;j<=m;j++)dp[0][j]=j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            dp[i][j]=min({dp[i][j],dp[i-1][j-1]+(st1[i-1]!=st2[j-1])});
            dp[i][j]=min({dp[i][j],1+dp[i-1][j]});
             dp[i][j]=min({dp[i][j],1+dp[i][j-1]});
        }
    }
    cout<<dp[n][m]<<nn;
    return 0;
}
