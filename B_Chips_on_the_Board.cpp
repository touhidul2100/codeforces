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
        vl v1(n), v2(n);
        read(v1, n);
        read(v2, n);
        sort(all(v1));
        sort(all(v2));
        bool f1 = 0;
        bool f2 = 0;
        ll s1 = 0, s2 = 0;
        for (i = 0; i < n; i++)
        {
            s1 += v1[i];
            s2 += v2[i];
            if (i + 1 == v1[i])
                f1 = 1;
            if (i + 1 == v2[i])
                f2 = 1;
        }
        s1 += (v2[0] * n);
        s2 += (v1[0] * n);
       
            cout << min(s1, s2) << nn;
        }
    

    return 0;
}
