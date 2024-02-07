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
#define inf 1e18
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
    vl v1(n), v2(n);
    read(v1, n);
    read(v2, n);
    ll sm1[n + 5], sm2[n + 5];
    sm1[0] = 0;
    for (i = 1; i < n; i++)
    {
        sm1[i] = sm1[i - 1] + v1[i];
    }
    sm2[0] = 0;
   for (i = 1; i < n; i++)
    {
        sm2[i] = sm2[i - 1] + v2[i-1];
    }
    //  for(i=1;i<n;i++)
    // {
    // cout<<sm1[i]<<" ";
    // }
    // cout<<nn;
    //  for(i=1;i<n;i++)
    // {
    // cout<<sm2[i]<<" ";
    // }
    // cout<<nn;
    ll ans=inf;
    for(i=0;i<n;i++)
    {
       // cout<<"i="<<i<<" "<<sm1[n-1]-sm1[i]<<" "<<sm2[i]<<nn;
        ll tm=max(sm1[n-1]-sm1[i],sm2[i]);
        ans=min(ans,tm);
    }
    cout<<ans<<nn;
}
    return 0;
}
