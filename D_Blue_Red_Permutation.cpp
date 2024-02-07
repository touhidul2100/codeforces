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
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    vl v(n);
    read(v, n);
    string st;
    cin >> st;
    vl red,black;
    for (i = 0; i < n; i++)
    {
        if (st[i] == 'B')
        {
           black.pb(v[i]);
        }
        else if (st[i] == 'R')
        {
          red.pb(v[i]);
        }
    }
  sort(all(black));sort(all(red));
//   show(black);show(red);
  ll cnt=0,tr=1;
  for(i=0;i<black.size();i++)
  {
    if(black[i]>=tr)cnt++,tr++;
    else break;
  }
  for(i=0;i<red.size();i++)
  {
    if(red[i]<=tr)cnt++,tr++;
  }
  if(cnt==n)cout<<"YES"<<nn;
  else cout<<"NO"<<nn;}
    return 0;
}
