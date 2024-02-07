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
        cin >> n;
        vl v(n);
        read(v, n);
        map<ll, ll> mp;
        ll mex = n;
        for (i = 0; i < n; i++)
            mp[v[i]]++;
        bool duel = 0;
        bool f = 1;
        for (i = 0; i < n; i++)
        {
            if (!mp[i] && f)
            {
                mex = i;
                f = 0;
            }
            if (mp[i] > 1)
                duel = 1;
        }
        if (mex >= n)
        {
           
                cout << "No" << nn;
            continue;
        }
        ll porer = mex + 1;
            if(mp[porer]<2)
            {
                cout<<"Yes"<<nn;
                continue;
            }
     ll l,r;bool p=0;
       for(i=0;i<n;i++)
       {
        if(v[i]==porer && !p)
        {
            l=i;r=i;p=1;
        }
        else if(v[i]==porer)r=i;
       }
   f=1;
    for(i=l+1;i<r;i++)
    {
        mp[v[i]]--;
        if(mp[v[i]]<=0 && v[i]<porer)
        {
            f=0;break;
        }
    }
           if(f) cout<<"Yes"<<nn;
           else cout<<"No"<<nn;
                
        
       
    }
    return 0;
}
