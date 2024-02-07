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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n>>k;
    string st;cin>>st;
    ll ans=n;
  ll ara[n+5];ara[0]=0;
  for(i=1;i<=n;i++)
  {
    ara[i]=ara[i-1]+int(st[i-1]=='W');
  }
  for(i=k;i<=n;i++)
  {
    ans=min(ans,(ara[i]-ara[i-k]));
  }
  cout<<ans<<nn;}
    return 0;
}
