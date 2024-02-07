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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vl v(n + 1);
    for (i = 1; i <= n; i++)
        cin >> v[i];
    ll gd = mx(v);
    for (i = 1; i <= n; i++)
    {
        gd = __gcd(gd, v[i]);
    }
    ll ans = 0;
    if (gd > 1)
    {
        for (i = n; i > 0; i--)
        {
            ll tm = __gcd(i, v[i]);
            if (__gcd(tm, gd) == 1)
            {
                ans = n - i + 1;
                break;
            }
        }
    }
    ll tp=3;
    cout << min(ans,tp) << nn;}
    return 0;
}
