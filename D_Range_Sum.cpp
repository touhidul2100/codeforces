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
    if (n & 1)
    {
        k = n / 2;
        k = n - k;
        ll cnt = 1;
        vl v;
        while (cnt <= n)
        {
            v.pb(k + 2);
            k++;
            cnt++;
        }
        v[0] -= 1;
        v[n - 1] += 1;
        v[n - 2] += 1;
        show(v);
        //continue;
    }
    else 
    {
        vl v;k=n/2;
        k=n-k;
        ll cnt=0;
        while(k<n)
        {
            v.pb(k);k++;
        }
        k=n+1;
        while(k<=(n+n/2))
        {
            v.pb(k);k++;
        }
        show(v);
    }}
    return 0;
}
