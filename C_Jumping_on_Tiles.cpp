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
bool des(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.ff > b.ff)
        return true;
    else if (a.ff < b.ff)
        return false;
    return a.ss < b.ss;
}
bool asc(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.ff < b.ff)
        return true;
    else if (a.ff > b.ff)
        return false;
    return a.ss < b.ss;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    string st;
    cin>>st;
    n=st.size();
    vector<pair<ll, ll>> vp;
    for (i = 0; i <st.size(); i++)
    {
        vp.pb({st[i] - 96, i + 1});
    }
    if (vp[0].ff >= vp[n - 1].ff)
    {
        ll t1 = vp[n - 1].ff, t2 = vp[n - 1].ss;
        vl v;
        v.pb(1);
        sort(vp.begin() + 1, vp.end(), des);
        for (auto x : vp)
        {
            if ((x.ff <= vp[0].ff) &&(x.ss!=1))
            {
                v.pb(x.ss);
            }
            if (x.ff == t1 && x.ss == t2)
                break;
        }
        cout<<vp[0].ff-t1<<" "<<v.size()<<nn;
        show(v)
    }
      if (vp[0].ff < vp[n - 1].ff)
    {
        ll t1 = vp[n - 1].ff, t2 = vp[n - 1].ss;
        vl v;
        v.pb(1);
        sort(vp.begin() + 1, vp.end(), asc);
        for (auto x : vp)
        {
               if ((x.ff >= vp[0].ff) &&(x.ss!=1))
            {
                v.pb(x.ss);
            }
            if (x.ff == t1 && x.ss == t2)
                break;
        }
            cout<<t1-vp[0].ff<<" "<<v.size()<<nn;
        show(v)
    }}
    return 0;
}
