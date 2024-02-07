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
    cin >> n;
    vl v(n);
    read(v, n);
    bool final[n];
    ll l = v[0], r = v[0];
    bool f = 0;
    for (i = 0; i < n; i++)
    {
        if (f == 0)
        {
            if (v[i] >= r)
            {
                final[i] = 1;
                r = v[i];
            }
            else if (v[i] < r)
            {
               
                if (v[i] <= l)
                {
                    f=1;
                    final[i] = 1;
                    r = v[i];
                }
                else
                {
                final[i] = 0;
                }
            }
        }
        else if(f==1)
        {
            if(v[i]<=l && v[i]>=r)
            {
                final[i]=1;
                r=v[i];
            }
            else
            {
                final [i]=0;
            }
        }
    }
    for(i=0;i<n;i++)cout<<final[i];cout<<nn;}
    return 0;
}
