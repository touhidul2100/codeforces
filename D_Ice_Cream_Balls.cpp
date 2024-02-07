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
    ll ans;ll pls=0;
    ll l = 1, r = 10000000000, mid;
    while (l <= r)
    {
       // cout<<"l="<<" r="<<r<<nn;
        mid = l + (r - l) / 2;
        ll l1 = (mid * (mid - 1)) / 2;
        ll l2 = ((mid) * (mid+1)) / 2;
        if (l1 == n)
        {
            //cout<<"1="<<l2<<nn;
            ans = mid;
            break;
        }
        else if(l1<n &&  l2>n )
        {
           // cout<<"2="<<l2<<nn;
            pls=n-l1;
            ans=mid;break;
        }
        else if(l1>n)r=mid;
        else l=mid+1;
    }
    cout<<ans+pls<<nn;}
    return 0;
}
