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
#define nn '\n'
#define inf LONG_MAX
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
        cin >> a >> b >> n >> m;
        if (a + b < n + m)
        {
            cout << "No" << nn;
            continue;
        }
        ll p1 = 0, p2 = 0;
        while (1)
        {
            //cout << "first=" << n << " " << m << nn;
            if (a > b)
            {

               // cout << "Loop 1" << nn;
               // cout << "a=" << a << " b=" << b << nn;
                ll tm = min(b, m);
                b -= tm;
                m -= tm;
               // cout << "a=" << a << " b=" << b << nn;
                ll t2 = a - b;
                tm = min(t2, n);
                a -= tm;
                n -= tm;
               // cout << "a=" << a << " b=" << b << nn;
            }
            else
            {
               // cout << "Loop 2" << nn;
                //cout << "a=" << a << " b=" << b << nn;
                ll tm = min(m, a);
                a -= tm;
                m -= tm;
                //cout << "a=" << a << " b=" << b << nn;
                ll t2 = b - a;
                tm = min(t2, n);
                a -= tm;
                n -= tm;
              //  cout << "a=" << a << " b=" << b << nn;
            }
            //cout << "last=" << n << " " << m << nn << nn;

            if (n == 0)
            {
                if(b<a)
                {
                 if(b>=m)
                {
                    p1=0;p2=0;
                    break;
                }
                }
                else if(b>=a)
                {
                 if(a>=m)
                {
                    p1=0;p2=0;
                    break;
                }
                }
            

                
            }
            if(m==0)
            {
              
                 if(abs(a-b)+(2*min(a,b))>=m)
                {
                    p1=0;p2=0;
                    break;
                }
            }
            
            if (n == p1 && m == p2)
            {
                
                break;
            }
            p1 = n;
            p2 = m;
          //  cout << "p1=" << p1 << " p2" << p2 << nn;
        }
        //cout << p1 << " " << p2 << nn;
        if (p1 == 0 && p2 == 0)
            cout << "Yes" << nn;
        else
            cout << "No" << nn;
    }
    return 0;
}
