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
#define M 10000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vector<ll>vf;ll ara[n];
    for(i=0;i<n;i++)
    {
        cin>>j;
        vf.pb(j);
    }
    
  for(i=n-1;i>=0;i--)
  {
ara[i]=(n+1)-vf[i];
  }
  for(i=0;i<n;i++)cout<<ara[i]<<" ";cout<<nn;}
    return 0;
}
