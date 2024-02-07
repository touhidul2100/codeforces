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
#define inf 9e18
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
        cin >> n >> k;
        vl v;
        ll ans=inf;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            ans=min(ans,a);
            v.pb(a);
        }
        if (k > 2)
        {
            cout << 0 << nn;
            continue;
        }
        sort(all(v));
        ll dist = inf;
        ll pv = v[0];
        for (i = 1; i < n; i++)
           { dist = min(dist, abs(v[i] - v[i - 1]));
          
           }
        if (k == 1)
        {
            cout << min(ans,dist) << nn;
            continue;
        }
       vector<ll>st;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                ll tm = abs(v[j] - v[i]);
                st.pb(tm);
            }
        }
    sort(all(st));
        for(i=0;i<n;i++)
        {
            auto it=lower_bound(all(st),(v[i]));
            
            ll hi=it-st.begin();if(hi>=st.size())hi=st.size()-1;
        dist=min(dist,abs(st[hi]-v[i]));
        if(hi!=0)
        {
            hi-=1;
            
        dist=min(dist,abs(st[hi]-v[i]));
        }
        }
        cout <<min(ans,dist) << nn;
    }
    return 0;
}
