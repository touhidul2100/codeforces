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
#define N 200005
#define ok cout << "OK" << nn;
ll md = 1000000007;
ll ans = 0;
ll n, k, d;
ll dpp[105][105];
ll dp(ll sm, ll high)
{
     //cout<<"sm="<<sm<<" high="<<high<<" n="<<n<<nn;
    if (sm > n)
    {
        // cout<<"bad"<<nn;
        sm=0;
        return 0;
    }
    else if (sm == n)
    {
        if (high >= d)
        {
            
            ans++;
            ans %= md;
            dpp[sm][high]=1;
             return 1;
        }
        sm=0;
       return 0;
    }
    if (dpp[sm][high] != -1)
     {  
        {
          //  cout<<"in asn"<<nn;
            ans += dpp[sm][high];
            ans%=md;
            return dpp[sm][high];
        }
}
ll tm=0;
for (ll i = 1; i <=k; i++)
{
    if((sm+i)<=n){
       // cout<<"ini sm="<<sm<<" i="<<i<<endl;
    tm += dp(sm + i, max(high, i));}
    tm%= md;
}
dpp[sm][high]=tm;
return dpp[sm][high];
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
        ll i, m, a, b, j;
        cin >> n >> k >> d;
        for (i = 0; i <= 100; i++)
            for (j = 0; j <= 100; j++)
                dpp[i][j] = -1;
        ll an = dp(0, 0);
        cout << an << nn;
    }
    return 0;
}
