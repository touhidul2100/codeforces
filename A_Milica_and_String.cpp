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
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> k;
        string st;
        cin >> st;
        ll pre[n + 5];
        pre[0] = 0;
        ll A[n + 5];
        A[0] = 0;
        for (i = 0; i < n; i++)
        {
            if (st[i] == 'B')
            {
                pre[i + 1] = pre[i] + 1;
                A[i + 1] = A[i];
            }
            else
            {
                pre[i + 1] = pre[i];
                A[i + 1] = A[i] + 1;
            }
        }
        if (pre[n] == k)
        {
            cout << 0 << nn;
            continue;
        }
        if (k == 0 && pre[n] > 0)
        {
            cout << 1 << nn;
            cout << n << " A" << nn;
            continue;
        }
        a = n - k;
        for (i = 0; i < n; i++)
        {
            if (pre[n] - pre[i+1] == k)
            {
                cout << 1 << nn;
                cout << i + 1 << " A" << nn;
                break;
            }
            else if (A[n] - A[i+1] == a)
            {

                cout << 1 << nn;
                cout << i + 1 << " B" << nn;
                break;
            }
        }
    }
    return 0;
}
