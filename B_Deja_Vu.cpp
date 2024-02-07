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
        ll ara[n + 1], x[k + 1];
        for (i = 1; i <= n; i++)
            cin >> ara[i];
        for (i = 1; i <= k; i++)
            cin >> x[i];
        ll tara[31];
        for (i = 1; i <= 30; i++)
            tara[i] = pow(2, i);
            // cout<<"before"<<nn;
            // for(i=1;i<=10;i++)cout<<"i="<<i<<" tara="<<tara[i]<<nn;
        for (i = 1; i <= k; i++)
        {
            for (j = 1; j <= 30; j++)
            {
                ll tm = pow(2, x[i]);
                if (tara[j] % tm == 0)
                {
                    tara[j] +=(pow(2, x[i] - 1));
                }
            }
           // cout<<"OKK i="<<i<<" j="<<j<<nn;
            //   cout<<"After x="<<x[i]<<nn;
            //    for(a=1;a<=10;a++)cout<<"i="<<a<<" tara="<<tara[a]<<nn;cout<<nn;
        }

            // // for(i=1;i<=10;i++)cout<<"i="<<i<<" tara="<<tara[i]<<nn;
            // cout<<tara[4]<<nn;
        for (i = 1; i <= n; i++)
        {
            ll add=0;
            for (j = 30; j >0; j--)
            {
                ll tm = pow(2, j);
                if (ara[i] % tm == 0)
                {
                    ll aa = tara[j] - (pow(2, j));
                    add+=aa;break;
                }
            }
            ara[i]+=add;
        }
        for (i = 1; i <= n; i++)
            cout << ara[i] << " ";
        cout << nn;
    
    }return 0;
}
