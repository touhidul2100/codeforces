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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n,l,r,i, j, k, sm = 0;
    cin>>n>>l>>r;
 ll ara[n+1];

   bool f=1;
    for(i=n;i>=1;i--)
    {
      ll t1=((l-1)/i)+1;
      if((t1*i)>=l && (t1*i)<=r)
      {
        ara[i]=t1*i;
      }
      else 
      {
        f=0;break;
      }
    }

    if(!f)cout<<"NO"<<nn;
    else 
    {
            cout<<"YES"<<nn;
   for(i=1;i<=n;i++)cout<<ara[i]<<" ";cout<<nn;
    }
 
 }

    return 0;
}
