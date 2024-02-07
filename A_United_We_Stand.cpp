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
#define sum(_a) accumulate(all(_a), 0);
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
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        bool f = 0;
        ll ans;ll cnt=0;
        for (i = 0; i < n; i++)
        {
            cnt=0;
            bool s = 0;
            for (j = 0; j < n; j++)
            {
                if (v[i] == v[j])
                   {cnt++; continue;}
                if (v[j] % v[i] == 0)
                {
                    s = 1;
                    break;
                }
            }
            if (s == 0 && cnt!=n)
            {
                f = 1;
                ans = i;
                break;
            }
        }
        if (f)
        {
            cout << n -cnt << " " << cnt << nn;
            for (i = 0; i < n; i++)
            {
                if (v[i] == v[ans])
                    continue;
                cout << v[i] << " ";
            }
            cout << nn;
            while(cnt--){
            cout << v[ans] <<" ";}cout<<nn;
        }
        else
        {
            cout << -1 << nn;
        }
    }
    return 0;
}
