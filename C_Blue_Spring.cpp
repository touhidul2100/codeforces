#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
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
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, d, p, j, k, sm = 0;
    cin >> n >> d >> p;
    vl v(n);
    read(v, n);
    sort(all(v), greater<ll>());
    ll ans = 0;
    ll cnt = 0;
    bool f = 0;
    for (i = 0; i < n; i++)
    {
          if(f)
          {
            ans+=v[i];
          }
        if (!f)
        {
            cnt++;
            sm += v[i];
            if (cnt == d)
            {
                if (sm > p)
                {
                    ans += p;
                    sm = 0;
                    cnt = 0;
                }
                else 
                {
                    f=1;
                    ans+=sm;
                }
            }
        }
      
    }
      if (!f &&  sm > p )
                {
                    ans += p;
                    sm = 0;
                    cnt = 0;
                }
                else if(!f)
                {
                    
                    ans+=sm;
                }
    cout<<ans<<nn;
    return 0;
}
