#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()     \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);             \
  cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
#define read(_a, _n)            \
  for (auto i = 0; i < _n; i++) \
    cin >> _a[i];
#define show(_a)        \
  for (auto &val : _a)  \
  {                     \
    cout << val << " "; \
  }                     \
  cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define shiftleft(n) (static_cast<uint64_t>(1) << n)
#define shiftright(n, p) (static_cast<uint64_t>(n) >> p)
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
  Optimization();
  // fileread("input.txt");
  // filewrite("output.txt");
  ll Cases = 1;
  // cin >> Cases;
  for (ll Test = 1; Test <= Cases; Test++)
  {
    // cout << "Case " << Test << ": ";
    ll n, i, m, a, b, j, q;
    cin >> n >> q;
    vl ara(n + 5);
    for (i = 1; i <= n; i++)
      cin >> ara[i];
    vl tara(n + 5);
    tara = ara;
    while (q--)
    {
      ll k;
      cin >> k;
      // cout << "k=" << k << endl;
      ara = tara;
      // cout<<"ara:";for(m=1;m<=n;m++)cout<<tara[m]<<" ";cout<<endl;
      ll ans = 0;
      for (i = 60; i >= 0; i--)
      {

        ll sm = 0;
        vector<pl> pp;
        for (j = 1; j <= n; j++)
        {
          if ((1ll << i) & ara[j])
            continue;
          else
          {
            ll t2=0,tp=i-1;
           while(tp>=0)
           {
            if(ara[j]&(1ll<<tp))
            {
              t2+=(1ll<<tp);
            }
            tp--;
           }
           sm+=((1ll<<i)-t2);
            pp.pb({j,t2});
          }
          if (sm > k)
            break;
        }
        if (k >= sm)
        {
          ans += (1ll << i);
          k -= sm;
          for(auto x:pp)
          ara[x.ff]-=x.ss;
        }
        // if(i<5)
        // {cout<<"i="<<i<<" ans="<<ans<<nn;
        // cout<<"ara:";for(ll m=1;m<=n;m++)cout<<ara[m]<<" ";cout<<nn;}
      }
      cout << ans << endl;
    }
  }
  return 0;
}
