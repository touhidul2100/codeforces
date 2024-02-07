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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
 ll n,a=0,b,c=0,i,j;
 cin>>n;
 vl v(n),v1;
 read(v,n);
 v1.push_back(0);
for(i=0;i<n;i++)
{
    if(v[i]==1)
    {
        a++;
        c++;
        v1.push_back(c);
    }
    else if(v[i]==2 && c!=0)
    {
        c=(a+2)/2;
          v1.push_back(c);
    }
}
cout<<mx(v1)<<endl;}
    return 0;
}

