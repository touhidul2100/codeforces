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
        cin >> a >> b;
        bool f = 0;
        for (i = a; i <= b; i++)
        {
            if (i % 2 == 0 && i!=2)
            {
                cout << i / 2 << " " << i / 2 << nn;
                f = 1;
                break;
            }
        }
        if (f)
            continue;
            if(b<4)
            {
                cout<<-1<<nn;
                continue;
            }
            ll gd=0;
            for(i=3;i<=sqrt(a);i+=2)
            {
                if(a%i==0)
                {
                    gd=i;
                }
            }
            if(gd==0)
            {
                cout<<-1<<nn;
                continue;
            }
            cout<<gd<<" "<<((a/gd)-1)*gd<<nn;

    }
    return 0;
}
