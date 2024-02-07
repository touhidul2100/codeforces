#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
    Optimization();
    fileread("bcount.in");
    filewrite("bcount.out");
    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> m;
        ll ara[n + 5][4];
        for (i = 0; i <= n; i++)
            for (j = 0; j < 4; j++)
                ara[i][j] = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a;
            for (j = 1; j < 4; j++)
                ara[i][j] = ara[i - 1][j];
            ara[i][a]++;
        }
        while (m--)
        {
            cin >> a >> b;

            for (i = 1; i < 3; i++)
                cout << ara[b][i] - ara[a - 1][i] << " ";
            cout << ara[b][3] - ara[a - 1][3];
            cout << nn;
        }
    }
    return 0;
}
