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
#define N 100005;
#define ok cout << "OK" << nn;
ll cal(ll t1, ll t2)
{
    ll t3 = t1 / t2;
    if (t1 % t2 > 0)
        t3++;
    return t3;
}
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
        ll ara[n + 5];
        ll pre[n + 5];
        for (i = 1; i <= n; i++)
            cin >> ara[i];
        pre[0] = 0;
        for (i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + ara[i];
        ll bar = 0;
        for (i = n; i > 1; i--)
        {
           // cout<<"i="<<i<<nn;
            ll t1 = ara[i] * 100;
            ll t2 = pre[i - 1] + bar - pre[0];
            // cout<<"t1="<<t1<<" t2="<<t2<<nn;
            ll t3 = t1 / t2;
            if (t1 % t2 > 0)
                t3++;
             //cout<<"t3="<<t3<<nn;
            if (t3 <= k)
                continue;
            ll left = t2 + 1, right = 1e18, mid;
            //  cout<<"in="<<nn;
            ll cnt = 0;
            while (left <= right)
            {
                
                mid = left + (right - left) / 2;
                //cout << "left=" << left << " right=" << right << nn;
               // cout << "mid=" << mid << " ans=" << cal(t1, mid) << nn;
                if ((cal(t1, mid) <= k) && (cal(t1, mid - 1) > k))
                {

                    ll tm = mid - t2;
                    sm += tm;
                    //   cout<<"mid="<<mid<<" tm="<<tm<<nn;
                    bar += tm;
                    break;
                }
                else if (cal(t1, mid) <= k)

                {
                    //cout << "loop right= cal=" << cal(t1, mid) <<" mid="<<mid << nn;
                    right = mid-1;
                }
                else
                {
                   // cout << "loop left= cal=" << cal(t1, mid) << nn;
                    left = mid+1;
                }
            }
        }
        cout << sm << nn;
    }
    return 0;
}
