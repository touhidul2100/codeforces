#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(NULL);
  // ll test,tst;
  // cin>>test;
  // for(tst=1;tst<=test;tst++){
  while (1)
  {

    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> m;
    if (n == 0 && m == 0)
      break;
   
    
      a = n, b = m;
      vl v1, v2;
      while (a--)
      {

        cin >> k;
        v1.pb(k);
      }
      while (b--)
      {
        cin >> k;
        v2.pb(k);
      }
       if (n > m)
    {
      cout << "Loowater is doomed!" << nn;
    }
    else{
      sort(all(v1));
      sort(all(v2));
      // show(v1)
      //     show(v2)
              ll cnt = 0;
      auto it = v2.begin() - 1;
      for (i = 0; i < n; i++)
      {
        auto it2 = lower_bound(it + 1, v2.end(), v1[i]);
        if ((it2 - v2.begin()) < m)
        {
          //cout << "it=" << (it2 - v2.begin()) << " v[i]=" << v1[i] << " sm=";
          cnt++;
          it = it2;
          sm += v2[it2 - v2.begin()];
          // cout << sm << nn;
          ;
        }
        else
          break;
      }
      if (cnt == n)
        cout << sm << nn;
      else
        cout << "Loowater is doomed!" << nn;
    }
  }
  return 0;
}
