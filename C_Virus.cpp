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
    vl v(k);
    read(v, k);
    sort(all(v));
 
        ll mx = 0,
           tm = 0, ans = 0;
    vl vv;
    for (i = 1; i < k; i++)
    {
        tm = abs(v[i] - v[i - 1] - 1);
        vv.pb(tm);
        mx = max(tm, mx);
    }
    tm = (n - v[k - 1]) + (v[0] - 1);
    vv.pb(tm);
    mx = max(tm, mx);
    // cout<<"mx="<<mx<<nn;
    // if(mx<=1)cout<<mx<<nn;
    // else cout<<n-(mx-1)<<nn;
    // sm+=(mx-1);
    // sort(all(vv),greater<ll>());
    // vv[0]=0;

   sort(all(vv), greater<ll>());
   if(vv[0]>1)
   sm+=(vv[0]-1);
   else sm+=vv[0];
   vv[0]=0;

        for (i = 1; i < vv.size(); i++)
        {
           // cout << "mxx=" << mxx << " v[i]=" << vv[i] << nn;
           vv[i]-=(i*4);
            if (vv[i]>0)
            {
             if(vv[i]==1)sm+=1;
             else sm+=(vv[i]-1);
             vv[i]=0;
            }
            else break;
        }
    
    cout << n-sm << nn;}
    return 0;
}
