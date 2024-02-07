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
#define sum(_a) accumulate(all(_a),0);
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
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;vector<pair<ll,ll>>vp;
    ll a1,a2;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        vp.pb({a,b});
        if(i==0)
        {
            a1=a,a2=b;
        }
    }
    sort(vp.begin(),vp.end(),greater<>());
 
    bool f=1;
   
    for(auto x:vp)
    {
   if(x.ff==a1 && x.ss==a2)
        {
            sm++;
        }
      //  cout<<x.ff<<" "<<x.ss<<nn;
    }
    for(auto x:vp)
    {
          if(x.ff==a1 && x.ss==a2)
        {
            break;
        }
        if(x.ss>=a2)
        {
            f=0;break;
        }
      
    }
    if(f && sm==1)cout<<a1<<nn;
    else cout<<-1<<nn;}
    return 0;
}
