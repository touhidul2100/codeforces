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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        string st;
        cin >> st;
        if (st.size() < 2 && st[0] != '9')
        {
            cout << st[0] - 47 << nn;
            continue;
        }
        ll cnt = 1;
        bool change = 1, f2 = 0;
        for (i = 1; i < st.size(); i++)
        {
            if (st[i] == st[0])
                cnt++;
            if (!f2)
            {
                if (st[i] > st[0])
                {
                    change = 1;
                    f2 = 1;
                }
                else if (st[i] < st[0])
                {
                    change = 0;
                    f2 = 1;
                }
            }
        }
        if (cnt == st.size() || change)
        {
            if (st[0] == '9')
            {
                for (i = 0; i <= st.size(); i++)
                    cout << 1;
                cout << nn;
            }
            else
            {
                for (i = 0; i < st.size(); i++)
                    cout << st[0] - 47;
                cout << nn;
            }
        }
        else 
        {
            for(i=0;i<st.size();i++)cout<<st[0];cout<<nn;
        }
    }
    return 0;
}
