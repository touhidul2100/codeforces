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
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    string st1,st2;cin>>st1>>st2;
    n=st1.size();
    vl v1,v2;v1.pb(0);
    for(i=0;i<n;i++)
    {
        if(st1[i]==st2[i] && st1[i]=='0' )
        v1.pb(i);
    }
    v2.pb(n-1);
   for(i=n-2;i>=0;i--)
   {
    if(st1[i]==st2[i] && st1[i]=='1')
    v2.pb(i);
   }
   bool f=0;
   for(auto x:v1)
   {
    if(st1[x+1]==st2[x+1] && st1[x+1]=='1'){f=1;break;}
   }
     for(auto x:v2)
   {
    if(st1[x-1]==st2[x-1] && st1[x-1]=='0'){f=1;break;}
   }
   if(f)cout<<"YES"<<nn;
   else cout<<"NO"<<nn;}
    return 0;
}
