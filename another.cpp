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
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
   cin>>n;
   vl vv(n+1);
   for(i=0;i<n;i++)vv[i]=i+1;
   vector<vl>final;
   ll power=pow(2,n)-1;
   for(i=0;i<power;i++)
   {
    vl v;
    for(j=0;j<n;j++)
    {
        if(i &(1<<j))
        {
            v.pb(vv[j]);
        }
      
    }
      final.pb(v);
        v.clear();
   }

   ll cnt=0;
   for(i=0;i<final.size();i++)
   {cnt++;
   for(j=0;j<final[i].size();j++)
   cout<<final[i][j]<<" ";
   cout<<nn;
   }
   cout<<"cnt="<<cnt<<nn;
    return 0;
}
