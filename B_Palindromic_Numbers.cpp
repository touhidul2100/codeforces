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
    cin>>n;string st;cin>>st;
    // string req="";for(i=0;i<n;i++)req.insert(req.begin()+i,'9');
   vector<int>v;
   for(i=0;i<n;i++)
   {
    v.pb(57-st[i]);
   }
   //for(auto x:v)cout<<x;cout<<nn;
   if((st[0]<'9' && st[1]=='0')||(st[0]!='9'))
   {
    v[v.size()-1]+=2;
    for(i=v.size()-1;i>0;i--)
    {
            
            if(v[i]>9)
            {
                v[i]%=10;
                v[i-1]+=1;
            }
    }
   }
   else 
   {
    for(i=0;i<v.size();i++)v[i]+=1;
    v[v.size()-1]+=1;
     for(i=v.size()-1;i>0;i--)
    {
            
            if(v[i]>9)
            {
                v[i]%=10;
                v[i-1]+=1;
            }
    }
   }
   for(auto x:v)cout<<x;cout<<nn;}
    return 0;
}
