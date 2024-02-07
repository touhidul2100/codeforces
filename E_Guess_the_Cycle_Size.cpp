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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i, m, a, b, j, k, sm = 0;
    ll ans = 0, lft, rt;
    for (i = 2; i < 27; i++)
    {
        cout << "? " << 1 << " " << i << nn;
        cout.flush();
        cin >> lft;
        cout << "? " << i << " " << 1 << nn;
        cout.flush();
        cin >> rt;
        if (lft == -1)
        {
            ans = i - 1;
            break;
        }
        else if (lft != rt)
        {
            ans = lft + rt;
            break;
        }
    }
    // if (i > 26)
    // {
    //     assert(false);
    // }
    // else
    // {
        cout << "! " << ans << nn;
        cout.flush();
    
    return 0;
}
