#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vector<pair<ll,ll>>vp;
    for(i=0;i<n;i++)
    {
        cin>>j>>k;
        vp.pb({j,k});
    }
    ll dp[n+1][2];
    for(i=0;i<=n;i++)
    {
        dp[i][0]=INT_MIN;
        dp[i][1]=INT_MIN;
    }
    dp[0][0]=0;
    for(i=0;i<n;i++)
    {
        if(vp[i].ff==0)
        {
            dp[i+1][0]=max(dp[i][0],max(dp[i][1],dp[i][0])+vp[i].ss);
        }
        else
        {
            dp[i+1][1]=max(dp[i][1],dp[i][0]+vp[i].ss);
        }
        dp[i+1][0]=max(dp[i][0],dp[i+1][0]);
        dp[i+1][1]=max(dp[i+1][1],dp[i][1]);
    }
    cout<<max(dp[n][0],dp[n][1])<<endl;
    return 0;
}
