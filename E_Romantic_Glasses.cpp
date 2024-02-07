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
#define N 200005
#define ok cout << "OK" << nn;

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
        ll n, i, m, a, b, j, k;
         cin >> n;
        ll pre1[n+5];
ll pre2[n+5];
            pre1[0] = 0, pre2[0] = 0;
        map<ll,ll>mp;
       
        ll ara[n + 5];
        for (i = 1; i <= n; i++)
            cin >> ara[i];
        for (i = 1; i <= n; i++)
        {
            if (i & 1)
            {
                pre1[i] = ara[i] + pre1[i - 1];
                pre2[i] = pre2[i - 1];
            }
            else
            {
                pre2[i] = ara[i] + pre2[i - 1];
                pre1[i] = pre1[i - 1];
            }
        }
      bool f=0;
      mp[0]=1;
      for(i=1;i<=n;i++)
      {
        if(mp[pre1[i]-pre2[i]]>0){f=1;break;}
        else mp[pre1[i]-pre2[i]]++;
      }
       
        if (f)
            cout << "YES" << nn;
        else
            cout << "NO" << nn;
    }
    return 0;
}
