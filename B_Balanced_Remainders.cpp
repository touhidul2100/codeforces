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
ll an(ll c0,ll c1,ll c2)
{
    ll ans=0;
    ll x=(c0+c1+c2)/3;
     if (c0 < x)
            {
                ll x1 = c0;
                while (c0 < x && c2 > x)
                {
                    ans++;
                    c0++;
                    c2--;
                }
                if (c0 != x)
                {
                    while (c0 < x && c1 > x)
                    {
                        ans += 2;
                        c0++;
                        c1--;
                    }
                }
            }
            if (c1< x)
            {
                ll x1 = c1;
                while (c1 < x && c2 > x)
                {
                    ans+=2;
                    c1++;
                    c2--;
                }
                if (c1 != x)
                {
                    while (c1 < x && c0 > x)
                    {
                        ans += 1;
                        c1++;
                        c0--;
                    }
                }
            }
            return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, i, j, c0 = 0, c1 = 0, c2 = 0;
      //  cin>>c0>>c1>>c2;
        cin >> n;
        vl v(n);
        read(v, n);
        for (i = 0; i < n; i++)
        {
            if (v[i] % 3 == 0)
                c0++;
            else if (v[i] % 3 == 1)
                c1++;
            else
                c2++;
        }
    if(c0>=c1 && c0>=c2)
    cout<<an(c1,c2,c0)<<nn;
    else if(c1>=c0 && c1>=c2)
    cout<<an(c2,c0,c1)<<nn;
    else 
    cout<<an(c0,c1,c2)<<nn;
    }
    return 0;
}
