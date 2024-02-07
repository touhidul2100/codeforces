#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.ff < b.ff)
        return false;
    else if (a.ff > b.ff)
        return true;
    return a.ss < b.ss;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, j, k, sm = 0;
        cin >> n >> k;
        
        vl ans;
        ll ara[n];
        for (i = 0; i <n; i++)
        {
            cin >> j;
            ara[i]=j%k;
         
        }
       
        for(i=0;i<n;i++)
        {
            if(ara[i]==0)ans.pb(i+1);
        }
         vector<pair<ll, ll>> vp(n);
        for(i=0;i<n;i++)
        {
            vp[i].ff=ara[i];
            vp[i].ss=i+1;
        }
        sort(vp.begin(), vp.end(), cmp);
      for(auto x:vp)
      {
        if(x.ff!=0)ans.pb(x.ss);
      }
      for(auto x:ans)cout<<x<<" ";
      
        cout << nn;
        
    }

    return 0;
}