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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    sm = 1;
    bool f = 0;
    ll t2=1e5;
    ll t3=sqrt(n);
    for (k = 2; k <=min(t2,t3); k++)
    {
        ll tm = 1;
        ll tm2 = 1;
        while (tm < n)
        {
            tm2 *= k;
            tm += tm2;
            if (tm == n)
            {
                f = 1;
                cout<<"k="<<k<<" tm2="<<tm2<<nn;
                break;
            }
        }
    }
    if(f)
    cout<<"YES"<<nn;
    else cout<<"NO"<<nn;}
    return 0;
}
