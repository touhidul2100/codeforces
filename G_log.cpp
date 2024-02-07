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
ll cal(ll mid, ll n)
{
    ll tsm = (n * (n + 1)) / 2;
    ll t2 = (mid * (mid + 1)) / 2;
    return tsm - t2;
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
        ll n, i, m, a, b, j, k;
     cin >> n;
        // n=1e18;
        if(n<=2){cout<<1<<nn;continue;}
        //  if(n==3){cout<<2<<nn;continue;}
        ll t3=1e10+5;
        ll left=2,right=min(n-1,t3),mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            //cout<<"mid="<<mid<<nn;
          if((n-mid>=(mid*(mid-1))/2-1) &&((n-mid-1<(mid*(mid+1))/2-1)||mid==n-1))
          {
            cout<<n-mid+1<<nn;
            break;
          }
          else if((n-mid>=(mid*(mid-1))/2-1))left=mid+1;
          else right=mid;
        }
        
    }
    return 0;
}
