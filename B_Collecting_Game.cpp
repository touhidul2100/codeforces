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
        ll n, i, m, a, b, j, k;
        cin >> n;
        vl v(n);
        read(v, n);
        vpl ans;
        for (i = 0; i < n; i++)
        {
            ans.pb({v[i], i});
        }
        sort(all(ans));
        ll pre[n];
        pre[0] = ans[0].ff;
        for (i = 1; i <= n; i++)
            pre[i] = ans[i].ff + pre[i - 1];
        ll tm[n];
        for (i = 0; i < n; i++)
            tm[i] = 0;
        for (i = 1; i < n; i++)
        {
            if (ans[i].ff <= pre[i - 1])
                tm[i] = 1;
        }
        for (i = 1; i < n; i++)
            tm[i] += tm[i - 1];
        ll final[n];
        //for(i=0;i<n;i++)cout<<tm[i]<<" ";cout<<nn;
        for (i = 0; i < n; i++)
        {
            if(i==n-1 ||(tm[i+1]-tm[i]==0)){
                final[ans[i].ss]=i;
                continue;
            }
           // cout<<"i="<<i<<nn;
            ll left=i+1,right=n-1,mid;
            ll tans=i+1;
            bool f=0;
            while(left<=right)
            {
                mid=left+(right-left)/2;
                if(tm[mid]-tm[i]==mid-i)
                {
                    tans=mid;
                    left=mid+1;
                }
                else right=mid-1;
                
            }
            final[ans[i].ss]=tans;
        }
        for(i=0;i<n;i++)cout<<final[i]<<" ";cout<<nn;
    }
    return 0;
}
