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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
 ll n,c,i,j;
 cin>>n>>c;vl v(n);read(v,n);sort(all(v));
 ll sm=0;

    ll c1=0,c2=0,cn=0;
    for(i=0;i<n;i++)
    {
        if(v[i]==v[cn])
      {  c1++,c2=i;}
        else
        {
        //   cout<<c1<<" "<<c<<nn;
            if(c1>=c)
            sm+=c;
            else
            sm+=c1;
           //   cout<<v[i]<<" "<<sm<<nn;
            cn=i;c1=1;
            if(cn==n)break;
           
        }
    }
     if(c1>=c)
            sm+=c;
            else
            sm+=c1;
            cout<<sm<<nn;}
 
    return 0;
}

