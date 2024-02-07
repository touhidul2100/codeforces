#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
        cout << endl;       \
    }
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, k;
    cin >> test;
    for (k = 1; k <= test; k++)
    {
        ll n, i, j, k, sm = 0;
        string st;
        cin >> st;
        st += st;
        j = 0;
        ll pm = 0;
        for (i = 0; i < st.size(); i++)
        {
            if (st[i] == '1')
            {
                j++;
                pm = max(j, pm);
            }
            else
                j = 0;
        }
       
        if(pm==st.size())
        {
            sm=(pm/2)*(pm/2);
        }
      else{  sm = pm;
            for (i = 2; i <= pm; i++)
            {
               
                ll tp = (i * (pm - i)) + i;
                sm = max(sm, tp);
            }
       }
        cout << sm << nn;
    }
    return 0;
}
