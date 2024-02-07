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
        cout << val << " "; \
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j;
        cin >> n;
        vl v1(n), v2(n), pr(n);
        read(v1, n);
        sort(all(v1), greater<ll>());
        v2 = v1;
        auto it = unique(all(v2));
        v2.resize(distance(v2.begin(), it));
        if (v2.size() == 1)
        {
            cout << "NO" << nn;
            continue;
        }

        else if(v2.size()>=2)
        {

            pr[0] = v1[0];
            for (i = 1; i < n; i++)
                pr[i] = pr[i - 1] + v1[i];

            for (i = 1; i < n; i++)
            {
                if (v1[i] == pr[i - 1])
                    swap(v1[n - 1], v1[i - 1]);
                break;
            }
            cout << "YES" << nn;
            show(v1);
        }
    }
    return 0;
}
