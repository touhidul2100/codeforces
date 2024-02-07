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
ll spf[1000005];
void sp()
{
    for (ll i = 1; i < 1000005; i++)
        spf[i] = i;
    for (ll i = 2; i < 1000005; i += 2)
        spf[i] = 2;
    for (ll i = 3; i < 1000005; i += 2)
    {
        if (spf[i] == i)
        {
            for (ll j = i * i; j < 1000005; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
int main()
{

    ll test, tst;
    sp();
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> a >> b;

        if (a == b)
        {
            if(a==1)cout<<"YES"<<nn;
            else 
            cout << "NO" << nn;
        }
        else if (b > a)
        {
            if (a == 1)
                cout << "YES" << nn;
            else
                cout << "NO" << nn;
        }
        else if (a > b)
        {

            if (spf[a] <= b)
                cout << "NO" << nn;
            else
                cout << "YES" << nn;
        }
    }
    return 0;
}
