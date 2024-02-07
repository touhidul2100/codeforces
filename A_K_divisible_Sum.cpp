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
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, i, j, k;
        cin >> n >> k;
        if (n == k||k==1)
          {  cout << 1 << nn;continue;}
          else if(n==1)
          cout<<k<<nn;
        else if (n > k)
        {
            ll x,c;
           ll ans=1;
           if(n%k>0)ans+=1;
            cout << ans << nn;
        }
        else
        {
            ll c1 = 1, x1;
           x1=(k/n);
           if(k%n>0)x1+=1;
           cout<<x1<<nn;
        }
    }
    return 0;
}
