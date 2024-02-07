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
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k;
        cin >> n >> k;
        set<ll> st;
        for (i = 0; i < 20; i++)
        {
            if (k & (1 << i))
                st.insert((1 << i));
        }
        if (st.size() > n)
        {
            set<ll> final;
            ll sm = 0;
            for (auto it : st)
            {
                if (final.size() < n - 1)
                {
                    final.insert(it);
                }
                else
                {
                    sm += it;
                }
             
            }
               final.insert(sm);
                cout << "YES" << nn;
                for (auto it : final)
                    cout << it << " ";
                cout << nn;
                continue;
        }
        if (st.size() == n)
        {
            cout << "YES" << nn;
            for (auto it : st)
                cout << it << " ";
            cout << nn;
            continue;
        }
        ll xr = 0;
        for (i = 0; i <=1000000; i++)
        {
            if (st.size() == n - 1)
                break;
            if (!st.count((i)))
            {
                st.insert(i);
                xr ^= i;
            }
        }
   
        if (!st.count(xr))
        {
            st.insert(xr);
        }
        else
        {
            // for (auto it : st)
            //     cout << it << " ";
            // cout << nn;
            for (auto it : st)
            {
                bool f = 0;
                ll tm = it;
                if (tm != xr)
                {
                    
                    for (i = 0; i <= (1 << 19); i++)
                    {
                        if ((!(tm & (1 << i))) && (!(xr & (1 << i))))
                        {
                            

                            st.erase(tm);
                           ll tm1 = tm + (1 << i);
                            ll tm2 = xr + (1 << i);
                            if ((!(st.count(tm1))) && (!(st.count(tm2))))
                            {
                                st.insert(tm1);
                                st.insert(tm2);
                                f = 1;
                                break;
                            }
                            st.insert(tm);
                        }
                    }
                }
                if (f)
                    break;
            }
        }
        if (st.size() == n)
        {
            cout << "YES" << nn;
            for (auto it : st)
                cout << it << " ";
            cout << nn;
            continue;
        }
        cout << "NO" << nn;
       
    }
    return 0;
}
