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
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, k, i, j, x, sum = 0, ans;
        cin >> n >> k;
        vector<ll> v;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            sum = sum + (x / k);
            ans = x % k;
            v.push_back(ans);
        }
        sort(v.rbegin(), v.rend());
     //   cout << sum << endl;
        for (i = 0, j = n - 1; j > i; i++, j--)
        {
            while ((v[i] + v[j]) < k)
            {
                if (j > i)
                    j--;
                else
                    break;
            }
            if (i == j)
            {
                break;
            }
            sum++;
        }
        cout << sum << endl;
    }
    return 0;
}
