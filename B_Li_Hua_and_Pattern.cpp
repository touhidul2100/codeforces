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
        cout << val << " "; \
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
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, i, j, m;
        cin >> n >> m;

        ll ara[n + 1][n + 1];
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cin >> ara[i][j];
            }
        }
        if (n == 1)
        {
            cout << "YES" << nn;
            continue;
        }
        ll cnt = 0;
        ll k = n;
        for (i = 1; i <= n / 2; i++)
        {

            ll c = 0;
            for (j = 1; j <= n; j++)
            {
                if (ara[j][i] != ara[n - c][k])
                {

                    cnt++;
                    //cout << j << i << " " << n - c << k << " " << cnt << nn;
                    ;
                }
                c++;
            }
            k--;
        }
        if (n & 1)
        {
            ll ct = (n + 1) / 2;
            i = 1;
            j = n;
            while (i <= j)
            {
                if (ara[i][ct] != ara[j][ct])
                    cnt++;
                i++;
                j--;
            }
        }
       // cout << cnt << nn;
        if (cnt > m)
        {
            cout << "NO" << nn;
        }
        else
        {
            if(n&1)cout<<"YES"<<nn;
            else{
            ll s = m - cnt;
            if (s & 1)
                cout << "NO" << nn;
            else
                cout << "YES" << nn;
        }}
    }
    return 0;
}
