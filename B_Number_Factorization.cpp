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
        cout << endl;       \
    }
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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin >> n;
    map<ll, ll> fact;
    ll hig = 0;
    for (i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            fact[i]++;
            n /= i;
           
        }
        hig = max(hig, fact[i]);
    }
    if (n != 1)
    {
        fact[n]++;
        hig = max(hig, fact[n]);
    }
    // for (auto it=fact.begin();it!=fact.end();it++)
    // {
    //     cout << it->ff << " " << it->ss << nn;
    // }
    ll ans = 0;
    while (hig--)
    {
        ll add = 1;
        for (auto x : fact)
        {
            if (x.ss > 0)
            {
                add *= x.ff;
                fact[x.ff]--;
            }
        }
        ans += add;
    }
    cout << ans << nn;}
    return 0;
}
