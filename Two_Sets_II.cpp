// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vl vector<ll>
// #define ff first
// #define Optimization()       \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0);             \
//     cerr.tie(0)
// #define ss second
// #define pb push_back
// #define pl pair<ll, ll>
// #define vpl vector<pl>
// #define fileread(x) freopen(x, "r", stdin)
// #define filewrite(x) freopen(x, "w", stdout)
// #define read(_a, _n)              \
//     for (auto i = 0; i < _n; i++) \
//         cin >> _a[i];
// #define show(_a)            \
//     for (auto &val : _a)    \
//     {                       \
//         cout << val << " "; \
//     }                       \
//     cout << endl;
// #define all(_a) _a.begin(), _a.end()
// #define mx(_a) *max_element(all(_a))
// #define mn(_a) *min_element(all(_a))
// #define sum(_a) accumulate(all(_a), 0);
// #define pi = 2 * acos(0.0);
// #define nn '\n'
// #define inf 1e18
// #define N 2000005
// #define ok cout << "OK" << nn;
// ll dp[505][70005];
// ll n;
// int main()
// {
//     Optimization();
//     // fileread("input.txt");
//     // filewrite("output.txt");
//     ll Cases = 1;
//     // cin >> Cases;
//     for (ll Test = 1; Test <= Cases; Test++)
//     {
//         // cout << "Case " << Test << ": ";
//         ll i,n, m, a, b, j, k, sm = 0;
//         cin >> n;
//         for (i = 1; i <= n; i++)
//             for (j = 0; j <= 70005; j++)
//                 dp[i][j] =0;
//             dp[0][0]=1;
//         ll need = (n * (n + 1)) / 2;
//         if (need & 1)
//         {
//             cout << 0 << nn;
//             continue;
//         }
//         need/=2;
//         ll md=1e9+7;
//       for(i=0;i<=need;i++)
//       {
//         for(j=1;j<n;j++)
//         {
//             dp[j][i]=dp[j-1][i];
//             if(i-j>=0)
//            {dp[j][i]=dp[j-1][i]+dp[j-1][i-j];
//             dp[j][i]%=md;}
//         }
//       }
    
//     cout<<dp[n-1][need]<<nn;
//      } return 0;
// }
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
ll dp[505][70005];
bool take[505][70005];
ll n;
ll md = 1e9 + 7;
bool f=0;
ll dpp(ll i, ll sm, ll need)
{
    // cout<<"i="<<i<<" sm="<<sm<<nn;
    if (i == n + 1)
    {
        if (sm == need)
            return 1;
        return 0;
    }
    if (i > n || sm > need)
        return 0;
    if (dp[i][sm] != -1)
    {
        // if(!take[i][sm])
        return dp[i][sm];
        // return 0;
    }
    if (sm == need)
    {
      
        return 1;
    }
    ll ans1= dpp(i + 1, sm + i, need),ans2=dpp(i + 1, sm, need);
    
    dp[i][sm]=ans1+ans2;
    if(dp[i][sm]>md)f=1;
    return dp[i][sm] % md;
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll i, m, a, b, j, k, sm = 0;
        cin >> n;
        for (i = 1; i <= n; i++)
            for (j = 0; j <= 70005; j++)
                dp[i][j] = -1, take[i][j] = 0;
 
        ll need = (n * (n + 1)) / 2;
        if (need & 1)
        {
            cout << 0 << nn;
            continue;
        }
        need /= 2;
        ll ans = dpp(2, 0, need);
       cout<<ans<<nn;
    }
    return 0;
}