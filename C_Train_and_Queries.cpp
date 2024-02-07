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
#define M 10000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    //    cout<<nn;
    ll n, i, j, k, sm = 0, a, b;
    cin >> n >> k;
    map<ll,pair<ll,ll>>mp;
   for(i=0;i<n;i++)
   {
    cin>>a;
    if(!mp.count(a))
    {
        mp[a].first=i;
        mp[a].ss=i;
    }
    else mp[a].ss=i;
   }
   for(i=0;i<k;i++)
   {
    cin>>a>>b;
    if(!(mp.count(a))||!(mp.count(b))||mp[a].ff>mp[b].ss)
    {
        cout<<"NO"<<nn;
    }
    else
    cout<<"YES"<<nn;
   }}
    return 0;
}
