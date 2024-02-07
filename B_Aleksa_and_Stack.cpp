#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        ll ara[n + 1];
        ara[1] = 2;
        ara[2] = 3;

        for (i = 3; i <= n; i++)
        {
            ll tm = (ara[i - 2] + ara[i - 1]);
            ll an = ara[i - 1] + 1;
            while((an*3)%tm==0)an++;
            ara[i]=an;
        }
          
            for (i = 1; i <= n; i++)
            {
                // if (((3 * ara[i]) % (ara[i - 2] + ara[i - 1]) == 0) || (ara[i] <= ara[i - 1]))
                // {
                  cout<<ara[i]<<" ";
                //}
            }

           cout<<nn;
        }
        return 0;
    }
