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
        ll n, i, j, k, x, sm = 0;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << nn;
            cout << n << nn;
            for (i = 1; i <= n; i++)
                cout << 1 << " ";
            cout << nn;
        }
        else
        {
            if (k == 1)
            {
                cout << "NO" << nn;
            }
            else if (n & 1)
            {
                if (k < 3 || n <3)
                {
                    cout << "NO" << nn;
                }
                else
                {
                    cout << "YES" << nn;
                    cout << n / 2 << nn;
                    for (i = 1; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << 3 << nn;
                }
            }
            else
            {
                cout << "YES" << nn;
                cout << n / 2 << nn;
                for (i = 1; i <= n / 2; i++)
                    cout << 2 << " ";
                cout << nn;
            }
        }
    }
    return 0;
}
