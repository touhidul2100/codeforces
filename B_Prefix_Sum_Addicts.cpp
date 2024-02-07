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
#define M 10000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, j, k, sm = 0;
        cin >> n >> k;
        vl v(n);
        read(v, k);
        vl ano;
        for (i = 1; i < k; i++)
            ano.pb(v[i] - v[i - 1]);
        if (k == 1)
        {
            cout << "YES" << nn;
            continue;
        }
        if (!(is_sorted(all(ano))))
            
        {
            cout << "NO" << nn;
            continue;
        }
        if (v[0] > ano[0] * (n - k + 1))
        {
            //cout<<"lo"<<nn;
            cout << "NO" << nn;
            continue;
        }
        else cout<<"YES"<<nn;
    }
    return 0;
}
