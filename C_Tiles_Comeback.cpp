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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin >> n >> k;
    vl v(n);
    read(v, n);
    if (v[0] == v[n - 1])
    {
        ll ct = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] == v[0])
                ct++;
                if(ct==k)break;
        }
        if(ct==k)cout<<"YES"<<nn;
        else cout<<"NO"<<nn;
        continue;
    }
    ll i1 = n + 1, i2 = n + 1;
    ll cnt = 0;
    bool f1 = 0, f = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] == v[0])
            sm++;
        if (sm == k)
        {
            f1 = 1;
            i1 = i;
            break;
        }
    }
    if (f1)
    {
        sm = 0;
        for (i = n - 1; i > i1; i--)
        {
            if (v[i] == v[n - 1])
                sm++;
            if (sm == k)
            {
                f = 1;
                break;
            }
        }
    }
    if(f)cout<<"YES"<<nn;
    else cout<<"NO"<<nn;}
    return 0;
}
