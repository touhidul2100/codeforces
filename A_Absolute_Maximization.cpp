#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";cout<<endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
#define M 10000007
ll ara[100001];
ll mn,mx;

string dtob(ll n)
{
string st="";
while(n!=0)
{
    if(n%2==0)st=st+"0";
    else st=st+"1";
    n/=2;
}
 reverse(st.begin(),st.end());
return st;
}
ll btod(string st)
{
     reverse(st.begin(),st.end());
    ll ans=0;
    for(ll i=0;i<st.size();i++)
    {
        if(st[i]=='1')
        {
         
            ans+=pow(2,i);
           
        }
    }
    return ans;
}
pair<string,string> sp(string s1,string s2)
{
  
    ll n1=s2.size()-1,n2;
 
    for(ll i=s1.size()-1;i>=0;i--)
    {
        if(s1[i]=='1' && s2[n1]=='0')
        {
            
            s2[n1]='1';s1[i]='0';
        }
        n1--;
    }
  
    //  for(ll i=s5.size()-1;i>=0;i--)
    // {
    //     if(s5[i]=='1' && tm[n2]=='0')
    //     {
            
    //         s5[i]='0';
    //     }
    //     n2--;
    // }
    pair<string,string>s;
    s=make_pair(s1,s2);
    // mn=min(min(mn,btod(s1)),btod(s5));mx=max(btod(s2),mx);
    return s;
}
pair<string,string> sp2(string s1,string s2)
{
  
    ll n1=s2.size()-1,n2;
 
    for(ll i=s1.size()-1;i>=0;i--)
    {
        if(s1[i]=='1' && s2[n1]=='0')
        {
            
            s2[n1]='1';s1[i]='0';
        }
        n1--;
    }
  
    //  for(ll i=s5.size()-1;i>=0;i--)
    // {
    //     if(s5[i]=='1' && tm[n2]=='0')
    //     {
            
    //         s5[i]='0';
    //     }
    //     n2--;
    // }
    pair<string,string>s;
    s=make_pair(s1,s2);
    // mn=min(min(mn,btod(s1)),btod(s5));mx=max(btod(s2),mx);
    return s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,k;
    // cin>>test;
    // for(k=1;k<=test;k++){
        ll n,i,j,sm=0;
       
cin>>n;
cout<<dtob(n)<<nn;
// vector<int> v(n);read(v,n);sort(all(v));
// vector<string>vs;
// for(i=0;i<n;i++)
// {
// vs.pb(dtob(v[i]));
// }
// string tm1=vs[n-1];
// string tm2=vs[0];
// for(i=0;i<n-1;i++)
// {
//     pair<string,string>p;
//     p=sp(vs[i],vs[n-1]);
//     vs[i]=p.ff;vs[n-1]=p.ss;

// }
// for(i=1;i<n;i++)
// {
//     pair<string,string>p;
//     p=sp(vs[0],vs[i]);
//     vs[0]=p.ff;vs[i]=p.ss;

// }
// mx=btod(vs[n-1]);mn=btod(vs[0]);

// cout<<mx-mn<<nn;}
    return 0;
}
// #include <bits/stdc++.h>
 
// using namespace std;
 
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
 
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int tt;
//   cin >> tt;
//   while (tt--) {
//     int n;
//     cin >> n;
//     int x = -1;
//     int y = 0;
//     for (int i = 0; i < n; i++) {
//       int a;
//       cin >> a;
//       x &= a;
//       y |= a;
//       cout<<a<<" "<<x<<" "<<y<<endl;
//     }
//     cout << y - x << '\n';
//   }
//   return 0;
// }

