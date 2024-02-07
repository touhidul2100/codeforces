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
        vector<string> v(8);
        for (i = 0; i < 8; i++)
            cin >> v[i];
        ll r, c;
        bool f=0;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                if (v[i][j] >= 'a' && v[i][j] <= 'z')
                {
                   // cout<<"YES"<<nn;
                    r = i;
                    c = j;f=1;
                    break;
                }
            }
            if(f)break;
        }
        vector<char> vv;
        while (r < 8 && v[r][c] != '.')
        {
            vv.pb(v[r][c]);
            r++;
        }
        for (i = 0; i < vv.size(); i++)
            cout << vv[i];
            cout<<nn;
}
    return 0;
}
