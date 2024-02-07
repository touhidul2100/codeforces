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
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, j, k, sm = 0, sum = 0;
        cin >> n;
        vl v(n - 1);
        read(v, n - 1);
        map<ll, ll> mp;
        ll rem = 0;
        bool f3 = 1;
        for (i = 0; i < n - 1; i++)
        {
            if (v[i] == (n * (n + 1)) / 2)
                f3 = 0;
            ll t1;
            if (i == 0)
                t1 = v[i];
            else
                t1 = v[i] - v[i - 1];
            if (t1 > n)
                rem = t1;
            mp[t1]++;
        }
        vl vv, v1;
        bool f = 0;

        for (i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
                vv.pb(i);
            else if (mp[i] == 2)
                rem = i, sum++,v1.pb(i);
            if (mp[i] > 2)
                f = 1;
        }
        if (f || sum > 1)
        {
            cout << "NO" << nn;
            continue;
        }
        if (rem == 0 && f3)
            cout << "YES" << nn;
            else if((v1.size()==1&& mp[v1[0]]>2)||v1.size()>1||vv.size()>2)cout<<"NO"<<nn;
        else if ((vv[0] + vv[1]) == rem)
        {
            cout << "YES" << nn;
        }
        else
            cout << "NO" << nn;
    }
    return 0;
}
