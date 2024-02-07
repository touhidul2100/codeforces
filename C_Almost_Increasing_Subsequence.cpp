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
    // ll test,k;
    // cin>>test;
    // for(k=1;k<=test;k++){
    ll n, k, i, l, r, j, sm = 0;
    cin >> n >> k;
    vl v(n + 1);
    vl sf(n + 3);
    for (i = 1; i <= n; i++)
        cin >> v[i];
    sf[0] = 0;
    for (i = 1; i <= n; i++)
    {
        sf[i] = sf[i - 1];
        if (i > 2 && v[i] <= v[i - 1] && v[i - 1] <= v[i - 2])
        {
            sf[i]+=1;
        }
    }
    sf[n+1]=sf[n];
    ll ans;
    for (i = 1; i <= k; i++)
    {
        cin >> l >> r;
        ans = r - l + 1;
        if (ans > 2)
        {
            ans = ans - (sf[r] - sf[l + 1]);
    
        }
        cout << ans << nn;
    }
    return 0;
}
