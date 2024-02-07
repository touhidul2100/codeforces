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


ll cal(ll num,ll n,ll k,vl v)
{
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += (num / v[i]);
        if (ans > k)
            break;
            //cout<<"i="<<i<<" ans="<<ans<<nn;
    }
    return ans;
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
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> k;
        vl v(n);read(v,n);

        ll left = 1, right = inf, mid;
        bool f = 0;
        ll cnt=0;
        while (left <= right)
        {

            mid = left + (right - left) / 2;
            ll tans = cal(mid,n,k,v);
           //cout << "left=" << left << " right=" << right << " mid=" << mid << " tans=" << tans << nn;
            if (tans >= k && cal(mid - 1,n,k,v) < k )
            {
                break;
            }
            else if (tans >= k)
                right = mid;
            else
            {
                //cout<<nn<<"tans="<<tans<<" k="<<k<<" f="<<(tans<k)<<nn;
                left = mid+1 ;
            }
            if (f)
                break;
            if (left == right)
                f = 1;
                // if(cnt++>20)break;
        }
        cout << mid << nn;
        
    
    }
    return 0;
}
