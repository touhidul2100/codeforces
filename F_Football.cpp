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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,k;
    // cin>>test;
    // for(k=1;k<=test;k++){
        ll n,i,j,sm=0,a,b;
cin>>n>>a>>b;
if(n==1&& a==b)cout<<1<<nn<<a<<":"<<b<<nn;
else if(n==1&& a!=b)cout<<0<<nn<<a<<":"<<b<<nn;
else if(a>=n)
{
     ll x;
    if(b==0)x=a-n+1;
    else x=a-n+2;
    cout<<0<<nn;
    for(i=0;i<n;i++)
    {
        if(i==0 && b>0)
        cout<<0<<":"<<b<<nn;
        else if(i==n-1)
        cout<<a-(n-2)<<":"<<0<<nn;
        else cout<<1<<":"<<0<<nn;
    }
}
else if(b>=n )
{ ll x;
    if(a==0)x=b-n+1;
    else x=b-n+2;
    cout<<0<<nn;
    for(i=0;i<n;i++)
    {
        if(i==0 && a>0)
        cout<<a<<":"<<0<<nn;
        else if(i==n-1)
        cout<<0<<":"<<x<<nn;
        else cout<<0<<":"<<1<<nn;
    }
}
else if(a+b>=n)
{ll c=0;
cout<<0<<nn;
    while(a--)
    {
        cout<<1<<":"<<0<<nn;c++;
    }
    ll c2=0;
    for(i=c;i<n-1;i++)
    {cout<<0<<":"<<1<<nn,c2++;}
     cout<<0<<":"<<b-c2<<nn;
}
else if(a+b<n)
{
    ll c=0;
cout<<n-(a+b)<<nn;
while(a--)
{cout<<1<<":"<<0<<nn,c++;}
while(b--)
{cout<<0<<":"<<1<<nn,c++;}
for(i=c;i<n;i++)
cout<<0<<":"<<0<<nn;
}

    return 0;
}

