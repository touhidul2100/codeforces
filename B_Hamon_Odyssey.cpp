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
        ll n, i, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        ll ans = v[0];
        for (i = 0; i < n; i++)
            ans = ans & v[i];
            if(ans!=0)
            {
                cout<<1<<nn;
                continue;
            }
        ll ans2 = v[0];
        for (i = 0; i < n; i++)
        {
            ans2 = ans2 & v[i];
            if (ans2 == 0)
            {
                sm++;
                
                if (i != n - 1)
                {
                    ans2 = v[i + 1];
                }
                else
                    break;
            
            }
        }
        cout << sm << nn;
    }
    return 0;
}
