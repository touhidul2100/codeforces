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
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> k;
    if (n % k != 0)
    {
        cout << -1 << nn;
         continue;
    }
    ll ara[n + 1];
    ara[n] = 1;
    ara[1] = k;
    for (i = 2; i < n; i++)
    {
        ara[i] = i;
    }
    ara[k] = n;
     ara[n] = 1;
    while(k<n)
    {
        for(i=k*2;i<=n;i+=k)
        {
            if(n%i==0)
            {
                ara[k]=i;
                k=i;
                break;
            }
        }
    }
    for (i = 1; i <= n; i++)
        cout << ara[i] << " ";
    cout << nn;}
    return 0;
}
