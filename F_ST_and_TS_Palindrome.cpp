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
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> k;
        string st;
        cin >> st;
        if (k == n||k==0)
        {
            cout << "Yes" << nn;
            continue;
        }
        else if (k > n)
        {
           
            if (2 * n > k)
                k %= n;
                else 
               {k-=n;
                k %= (2 * n);}
            // cout << "k=" << k << nn;
        }
        vector<char>c1,c2;
        for(i=0;i<k;i++)c1.pb(st[i]);
        for(i=n-1;i>=n-k;i--)c2.pb(st[i]);reverse(all(c2));
        if(c1!=c2)
        {
            cout<<"No"<<nn;
            continue;
        }
        vector<char>v1,v2;
        for(i=k;i<n;i++)v1.pb(st[i]);
        v2=v1;reverse(all(v2));
        if(v1!=v2)
        {
            cout<<"No"<<nn;
            continue;
        }
        v1.clear();v2.clear();
        for(i=0;i<n-k;i++)v1.pb(st[i]);
        v2=v1;reverse(all(v2));
        if(v1==v2)cout<<"Yes"<<nn;
        else cout<<"No"<<nn;
    }
    return 0;
}
