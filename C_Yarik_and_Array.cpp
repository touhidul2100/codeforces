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
        vl v(n + 1);
        for (i = 1; i <= n; i++)
            cin >> v[i];
        if (n == 1)
        {
            cout << v[1] << nn;
            continue;
        }
        ll pre[n + 5];
        pre[0] = 0;
        for (i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + v[i];
        ll ans =v[1];
        ll pv = 1;
        ll add=0;
        for (i = 2; i <=n; i++)
        {
            ans=max(ans,v[i]);
            a = abs(v[i-1]) % 2;
            b = abs(v[i]) % 2;
            if (a + b != 1)
            {
                 //  cout<<"fi"<<nn;
                ll tm = pv;
                for(;tm<=i-1;tm++)
                {
                  ll t2=pre[tm]-pre[pv-1]+add;
                  if(t2<0){add=0;pv=tm+1;}
                   if(t2>=0)
                  {
                    pv=tm+1;
                    add=t2;
                  }
                  ans=max(ans,t2);
                }
                pv=i;
                add=0;
            }
            else 
            {
                 ///cout<<"ss "<<pv<<nn;
                 ll tm = pv;
                for(;tm<=i;tm++)
                {
                  ll t2=pre[tm]-pre[pv-1]+add;
                 //cout<<"i="<<i<<"pv="<<pv<<" t2="<<t2<<endl;
                  if(t2<0){add=0;pv=tm+1;}
                  if(t2>=0)
                  {
                     pv=tm+1;
                    add=t2;
                  }
                  ans=max(ans,t2);
                }
            }
        }
        cout<<ans<<nn;
    }
    return 0;
}
