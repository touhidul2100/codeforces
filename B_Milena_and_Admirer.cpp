#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
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
#define N 2000005
#define ok cout << "OK" << nn;
ll minn(ll n, ll k,ll mn,ll fx)
{
   // cout<<"n="<<n<<" k="<<k<<nn;
    //  mn=min(mn,n);
    while(n>fx && k--)
    {
        mn=min(n/2,n-(n/2));
        // ll zro=1;
        // mn=max(mn,zro);
        n=(n+1)/2;
    }
    //cout<<"mn="<<mn<<nn;
    return mn;
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        ll mn = v[n - 1];
        ll ans = 0;
        for (i = n - 2; i >= 0; i--)
        {
            if (v[i] > mn)
            {
              ans+=(v[i]/mn);
              if(v[i]%mn==0)
              {
                ans--;
                continue;
                
              }
             // cout<<"before="<<mn<<nn;
              ll tm=minn(v[i],v[i]/mn,mn,mn);
              //cout<<"tm="<<tm<<nn;
              mn=min(mn,tm);
            }
            else
                mn = min(mn, v[i]);
              //  cout<<"after i="<<i<<" ans="<<ans<<nn;
        }
        cout << ans << nn;
    }
    return 0;
}
