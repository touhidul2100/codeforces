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
// pair<ll,ll> check(vector<ll>v)
// {
//     ll mnn=mn(v);
//     ll smin=1000000009;
//     for(ll j=0;j<v.size();j++)
//     {
//         if((v[j]<smin) && (v[j]>mnn))
//         {
//             smin=v[j];
//         }

//     }
//     if(smin==1000000009)smin=mnn;
//     pair<ll,ll>p;p.ff=mnn;p.ss=smin;
//     return p;
// }
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
        vl v1, v2;

        for (i = 0; i < n; i++)
        {
            cin >> k;
            vector<ll> v(k);
            read(v, k);
            sort(all(v));
            v1.pb(v[0]);
            v2.pb(v[1]);
            v.clear();
        }
        sort(all(v1));
        sort(all(v2));
        ll ans = 0;
        for (i = 1; i < v2.size(); i++)
            ans += v2[i];
        ans += v1[0];
        cout << ans << nn;
        v1.clear();
        v2.clear();
    }
    return 0;
}
