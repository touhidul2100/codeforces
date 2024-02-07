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
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, j, k, sm = 0;
        string st1, st2;
        cin >> st1 >> st2;
        if (st1.size() > st2.size())
            swap(st1, st2);
        while (st1.size() < st2.size())
        {
            st1.insert(0, "0");
        }
        // cout << st1 << " " << st2 << nn;
        vl v1, v2;
        for (i = 0; i < st1.size(); i++)
        {
            v1.pb(st1[i] - '0');
            v2.pb(st2[i] - '0');
        }
        for(i=0;i<v1.size();i++)
        {
            if(v1[i]>v2[i])
            {
                swap(v1,v2);
                break;
            }
            else  if(v1[i]<v2[i])
            {
               break;
            }
        }

        if (v1[0] == 0)
        {
          
            sm+=v2[i];
            sm+=(9*(v2.size()-1));
            cout << sm << nn;
            continue;
        }
        for (i = 0; i < v1.size(); i++)
        {
            if (v1[i] < v2[i])
            {
                sm += (abs(v1[i] - v2[i]));
                i++;
                break;
            }
        }
        sm += (9 * (v1.size() - i));
        cout << sm << nn;
    }
    return 0;
}
