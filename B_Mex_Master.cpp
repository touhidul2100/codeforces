#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)         \
    for (auto &val : _a) \
        cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k;
        cin >> n;
        vl v;
        for (i = 0; i < n; i++)
        {
            cin >> k;
            if (k > 0)
                v.push_back(k);
        }
        if (v.empty())
        {
            cout << 1 << endl;
            continue;
        }
        // if(v.size()<n-1){cout<<0<<endl;
        // continue;
        // }
        else if (v.size() >= n - 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            ll max = mx(v);
            ll min = mn(v);
            if (v.size() >= n / 2)
            {
                cout << 0 << endl;
                continue;
            }
            else if (max > 1)
            {
                cout << 1 << endl;
                continue;
            }
            else if (max == 1)
            {
                cout << 2 << endl;
                continue;
            }
        }
    }
    return 0;
}
