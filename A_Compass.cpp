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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    vector<pair<ll, ll>> vpp;
  
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        vpp.pb({a, b});
    }
      sort(vpp.begin(),vpp.end());
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            ll t1 = vpp[i].ff - vpp[j].ff;
            ll t2 = vpp[i].ss - vpp[j].ss;
            if (abs(t1) == abs(t2))
            {
                sm += 2;
               
            }
            else if((vpp[i].ff==vpp[j].ff)||(vpp[i].ss==vpp[j].ss))sm+=2;
        }
    }
    cout << sm << nn;}
    return 0;
}
