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
    ll test, k;
    cin >> test;
    for (k = 1; k <= test; k++)
    {
        ll n, i, j, sm = 0;
        cin >> n;
        vl v1(n + 1), v2(n + 1);
        for (i = 1; i <= n; i++)
            cin >> v1[i];
        for (i = 1; i <= n; i++)
            cin >> v2[i];
        ll l = 1, r = n;
        for (i = 1; i < n; i++)
        {
            if (v2[i] == v1[i])
                l++;
            else
                break;
        }
        for (i = n; i > l; i--)
        {
            if (v2[i] == v1[i])
                r--;
            else
                break;
        }
     
        for (i = l; i > 1; i--)
        {
            if (v2[i] >= v2[i - 1])
                {
                    
                    l--;}
            else
                break;
        }
        for (i = r; i < n; i++)
        {
            if (v2[i] <= v2[i + 1])
                r++;
            else
                break;
        }
        cout << l << " " << r << nn;
    }
    return 0;
}
