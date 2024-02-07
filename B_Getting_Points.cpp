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
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0, p, c, pt;
        cin >> n >> p >> c >> pt;
        ll tot = n / 7;
        if (n % 7 != 0)
            tot++;
        ll tm = n;
        ll to = 2;
        ll tdin = (tot + 1) / 2;
        if(tdin * c + tot * pt ==p)
        {
            cout<<n-tdin<<nn;
        }
       else if (tdin * c + tot * pt < p)
        {
            sm = tdin * c + tot * pt;
            tm -= tdin;
            ll lagbe = p - sm;
            ll left = 1, right = tm, mid;
            bool f = 0;
            while (left <= right)
            {
                mid = left + (right - left) / 2;
                if (mid * c >= lagbe && (mid - 1) * c < lagbe)
                {
                    break;
                }
                else if (mid * c > lagbe)
                    right = mid;
                else
                    left = mid + 1;
                if (f)
                    break;
                if (left == right)
                    f = 1;
            }
            cout << tm - mid << nn;
        }
        else 
        {
            ll left=1,right=tdin,mid;
            ll lgbe=p;
            bool f=0;
            while(left<=right)
            {
                mid=left+(right-left)/2;
                ll tmm=mid*c+min(tot,mid*2)*pt;
                ll t2=(mid-1)*c+min(tot,(mid-1)*2)*pt;
                if(tmm>=lgbe && lgbe>t2)
                {
                    break;
                }
                else if(tmm>lgbe)right=mid;
                else left=mid;
                if(f)break;
                if(left==right)f=1;
            }
            cout<<n-mid<<nn;
        }
    }
    return 0;
}
