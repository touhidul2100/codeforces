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
ll n,i,j;
cin>>n;
vl v1(n),v2(n);read(v1,n);read(v2,n);
ll n1=mx(v1),n2=mx(v2);
ll m=max(n1,n2);
if((n1!=v1[n-1]&&n2!=v2[n-1])||(m!=v1[n-1]&&m!=v2[n-1]))
{
    cout<<"No"<<endl;
    //continue;
}
else if(n1==v1[n-1]&&n2==v2[n-1])
{
    cout<<"Yes"<<endl;
    //continue;
}
else if(v1[n-1]==n1)
{
    bool f=0;ll c=0;
for(i=0;i<n-1;i++)
{
if(v1[i]<=v2[n-1]||v2[i]<=v2[n-1])
{
c++;
}
}
if(c==n-1)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
//continue;
}
else if(v2[n-1]==n2)
{
    bool f=0;ll c=0;
for(i=0;i<n-1;i++)
{
if(v1[i]<=v1[n-1]||v2[i]<=v1[n-1])
{
c++;
}
}
//cout<<c<<endl;
if(c==n-1)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
//continue;
}}
    return 0;
}

