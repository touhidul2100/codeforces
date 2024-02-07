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
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        ll pos = 0, neg = 0;
        vector<pair<ll, ll>> vpp;
        for (i = 0; i < n; i++)
        {
            if (v[i] < 0)
                neg++;
            else if (v[i] >= 0)
                pos++;
            vpp.pb({v[i], i});
        }
        //
          if(pos==n)
        {
            cout<<n-1<<nn;
            for(i=1;i<n;i++)
            cout<<i+1<<" "<<i<<nn;
            continue;
        }
          if(neg==n)
        {
            cout<<n-1<<nn;
            for(i=n;i>1;i--)
            cout<<i-1<<" "<<i<<nn;
            continue;
        }
        sort(vpp.begin(), vpp.end());
        ll bigp = abs(vpp[n-1].ff);
        ll bign =abs(vpp[0].ff);
        ll mxx = max(bigp,bign);
        ll c1 = 0, c2 = 0;
      
        while ((bigp <mxx )&&(bigp!=0))
        {
            bigp *= 2;
            c1++;
        }
        while ((bign <mxx)&&(bign!=0))
        {
            bign *= 2;
            c2++;
        }
        //  cout<<"bigp="<<bigp<<" c1="<<c1<<" neg="<<neg<<nn;
        //  cout<<"bign="<<bign<<" c2="<<c2<<" pos="<<pos<<nn;
        if ((c1 + neg) <= (c2 + pos) &&(bigp!=0))
        {
            cout << c1 + neg + (n-1) << nn;
            for (i = 0; i < c1; i++)
                cout << vpp[n-1].ss + 1 << " " << vpp[n-1].ss + 1 << nn;
           for(i=0;i<n;i++)
         {
            if(vpp[i].ff<0)
            {
                cout<<(vpp[i].ss+1)<<" "<<(vpp[n-1].ss+1)<<nn;
            }
         }
            for (i = 1; i < n; i++)
                cout << i+1 << " " << i << nn;
        }

        else
        {
            cout << c2 + pos +(n-1) << nn;
            for (i = 0; i < c2; i++)
                cout << (vpp[0].ss + 1) << " " << (vpp[0].ss + 1) << nn;
         for(i=0;i<n;i++)
         {
            if(vpp[i].ff>=0)
            {
                cout<<(vpp[i].ss+1)<<" "<<(vpp[0].ss+1)<<nn;
            }
         }
            for (i = n; i > 1; i--)
                cout << i-1 << " " << i  << nn;
        }
        vpp.clear();
}
    return 0;
}
