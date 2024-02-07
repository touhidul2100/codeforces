#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
//#define for(i,n) for(i=0;i<n;i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vl v;
   if(n%2==0)
  { cout<<-1<<endl;
  continue;
  }
  ll c=0;
  while(c<=40)
  {
    if(n==1)break;
    if((n-1)%4==0)
    {
        n=(n+1)/2;
        c++;
        v.push_back(1);
    }
    else
    {
       n= (n-1)/2;
       c++;
          v.push_back(2);
    }
  }
reverse(all(v));
if(n==1){
    cout<<c<<endl;
    show(v);cout<<nn;
}
else 
cout<<-1<<endl;}

    return 0;
}

