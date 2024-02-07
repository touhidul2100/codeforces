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
ll ara[30000];
ll dp[30000];
ll dpp(ll n, ll i, ll hte)
{
    if (i == n)
        return 0;
    if (dp[i] != 0)
    {
        return dp[i];
    }
    ll mnn = 1e18;
    for (int j = i + 1; j <= n; j++)
    {
        ll t1 = hte;
        for (int k = i + 1; k <= j; k++)
        {

            if (ara[k] <= ara[k - 1])
            {
                
                t1 += (ara[k - 1] - ara[k] + 1);
                cout<<"t1="<<t1<<nn;
            }
        }
        ll tm = dpp(n, j, t1);
        mnn = min(tm, mnn)+hte;
    }
    cout<<"i="<<i<<" mnn="<<mnn<<endl;
    dp[i] = mnn;
    return dp[i];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> ara[i];
        dp[i] = 0;
    }
    cout << dpp(n, 1, 0);

    return 0;
}
