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
#define nn '\n'
#define inf 1e18
#define N 100005
#define ok cout << "OK" << nn;
bool pm[N];
vl prime;
void create()
{
  ll i,j;
  for(i=2;i<N;i++)pm[i]=1;
  for(i=4;i<N;i+=2)pm[i]=0;
  for(i=3;i<N;i+=2)
  {
    if(pm[i]==1)
    {
      for(j=i*i;j<N;j+=i)
      if(pm[j]==1)pm[j]=0;
    }
  }
for(i=2;i<N;i++)if(pm[i]==1)prime.pb(i);

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    create();
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;n+=1;
    ll dp[n+5];dp[n]=1;
    ll md=1e9+7;
    for(i=n-1;i>=0;i--)
    {
      dp[i]=dp[i+1];
      for(auto x:prime)
      {
        
        if(x>=m||x+i+1>n)break;
        dp[i]+=dp[i+x+1];
        dp[i]%=md;
      }
    }
    cout<<dp[0]<<nn;}
    return 0;
}
