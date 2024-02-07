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
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        double p1, p2, a1, a2, b1, b2;
        cin >> p1 >> p2 >> a1 >> a2 >> b1 >> b2;
        double an1 = sqrt((abs(p1 - a1)) * (abs(p1 - a1)) + (abs(p2 - a2)) * (abs(p2 - a2)));
        double an2 = sqrt((abs(a1)) * (abs(a1)) + (abs(a2)) * (abs(a2)));
        double an = max(an1, an2);

        double bn1 = sqrt((abs(p1 - b1)) * (abs(p1 - b1)) + (abs(p2 - b2)) * (abs(p2 - b2)));
       
        double bn2 = sqrt((abs(b1)) * (abs(b1)) + (abs(b2)) * (abs(b2)));
        double bn = max(bn1, bn2);

        double tm1= sqrt((abs(a1 - b1)) * (abs(a1 - b1)) + (abs(a2 - b2)) * (abs(a2 - b2)));
        double ans;
      // cout<<"an1="<<an1<<" an2="<<an2<<" bn1="<<bn1<<" bn2="<<bn2<<" tm="<<tm1/2.0<<nn;
      if(an1>=bn1 && an2>=bn2)
      {
        ans=max(bn1,bn2);
      }
       else  if(an1<=bn1 && an2<=bn2)
      {
      
        ans=max(an1,an2);
      }
      else 
      {
        ans=max(min(an1,bn1),min(an2,bn2));
        // cout<<ans<<nn;
        ans=max(ans,tm1/2.0);
        
      }
    cout<<fixed<<setprecision(10)<<ans<<nn;}
    return 0;
}
