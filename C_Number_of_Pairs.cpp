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
    cin >> n >> a >> b;
    vl v(n);
    read(v, n);
    sort(all(v));
   // show(v)
    for (i = 0; i < n - 1; i++)
    {
        //cout<<"i="<<i<<nn;
        if (v[i] >= b)
            break;
        ll left;
      
            auto l = lower_bound(v.begin() + i + 1, v.end(), a - v[i]) - v.begin();
            if (l == n)
                continue;
          left=l--;
       
        auto right=upper_bound(v.begin()+i+1,v.end(),b-v[i])-v.begin();
        // if(right==n)continue;
        right--;
        if(left>right)continue;
        sm+=((right-left)+1);
    
     
    }
    cout<<sm<<nn;}
    return 0;
}
