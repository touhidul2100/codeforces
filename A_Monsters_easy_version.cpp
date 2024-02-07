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
        cout << endl;       \
    }
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin >> n;
    vl v(n);
    read(v, n);
    sort(all(v));
    // show(v);
    // cout << "size-" << v.size() << nn;
    ll krb = 1;
    ll pv = 0;
    bool f = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] == krb)
        {
            // cout << "one:"
            //      << "v[i]=" << v[i] << " sm=" << sm << nn;
            f = 1;
            continue;
        }
        else if (v[i] == krb + 1 && f == 1)
        {
            krb = v[i];
            f = 1;
            // cout << "two:"
            //      << "v[i]=" << v[i] << " sm=" << sm << nn;
            continue;
        }

        else
        {
           if(f)
           { sm += (v[i] - krb-1);krb+=2;}
            else 
           { sm += (v[i] - krb);krb++;}
            f = 0;
            //   cout << "three:"
            //  << "v[i]=" << v[i] << " sm=" << sm << nn;
        }
      
    }
    cout << sm << nn;}
    return 0;
}
