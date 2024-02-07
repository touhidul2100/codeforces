#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
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
#define nn '\n'
#define ok cout << "OK" << nn;
ll ara[100005];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll test,tst;
  cin>>test;
  for(tst=1;tst<=test;tst++){
  ll n, i, j, k, sm = 0;
  cin >> n >> k;
  ll f = 0, s = 1;
  ll md=100005;
    if((k-n)>2)
  {
    cout<<0<<nn;
    continue;
  }
  for (i = 3; i <= min(md,k); i++)
  {
    ll tm = s;
    s = f + s;
    f = tm;
    if(i==k)break;
  }

  //cout<<f<<" "<<s<<nn;
  ll cnt = 0;
  for (i = 0; i <=n; i++)
  {
    ll lf =i, rg = n, mid;
    ll cc=0;
   
    while (lf <= rg)
    {
   if(lf==rg)
   {
    cc++;
    if(cc>2)break;
   }
      mid = lf + (rg - lf) / 2;
      //cout<<"lf="<<lf<<" rg="<<rg<<" mid="<<mid<<nn;
      if (n ==((f * i) + (s * mid)))
      {
        // if (mid > i)
        // {
          cnt++;
          break;
        //}
        // else
        //   lf = mid + 1;
      }
      else if (n > (f * i) + (s * mid))
      {
        lf = mid + 1;
      }
      else if (n < (f * i) + (s * mid))
        rg = mid;
    }

  }
cout<<cnt<<nn;}
  return 0;
}
