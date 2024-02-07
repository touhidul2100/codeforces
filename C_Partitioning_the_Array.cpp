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
        vector<ll> dv;
        for (i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                dv.pb(i);
                dv.pb(n / i);
            }
        }
        set<ll> ans;
        for (ll ii = 0; ii < dv.size(); ii++)
        {
            bool possible = 1;
            for (auto x : dv)
            {
                if(x==1)continue;
                bool ik=1;
                for (i = 0; i < dv[ii]; i++)
                {
                    for (j = i + v[ii]; j < n; j +=v[ii])
                    {
                        if (v[j] % x != v[j -v[ii]]%x)
                        {
                            ik=0;
                            break;
                        }
                    }
                }
                if(ik){possible=1;break;}
                else possible=0;
            }
            if (possible)
            {
                ans.insert(dv[ii]);
            }
        }
        cout<<ans.size()<<nn;
    }
    return 0;
}
