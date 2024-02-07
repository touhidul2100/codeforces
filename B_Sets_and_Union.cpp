#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
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
#define inf 1e18
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        set<ll>st;
        vector<set<ll>>v;
        for (i = 0; i < n; i++)
        {
            cin >> k;
            set<ll>tm;
            for (j = 0; j < k; j++)
            {
                cin >> a;
                st.insert(a);
                tm.insert(a);
               
            }
            v.pb(tm);
        }
        ll ans=0;
    for(auto it=st.begin();it!=st.end();it++)
    {
        set<ll>ts;
        ll an=*it;
        for(i=0;i<n;i++)
        {
            if(v[i].count(an))
            continue;
            for(auto ii=v[i].begin();ii!=v[i].end();ii++)
            {
                ll y=*ii;
                ts.insert(y);
            }
        }
        if(ts.size()!=st.size())
        {
            b=ts.size();
            ans=max(ans,b);
        }
    }
    cout<<ans<<nn;}
    

    return 0;
}
