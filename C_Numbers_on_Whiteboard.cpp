
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
ll n,i,j,sum=0,k;
cin>>n;
ll t1=n,t2=n-2,md=n-1;
bool f=1;ll c=0;
if(n==2)
{
    cout<<2<<nn;
    cout<<1<<" "<<2<<nn;
   continue;
}
cout<<2<<nn;

for(i=1;i<=n-1;i++)
{
    cout<<t1<<" "<<t2<<nn;
    t2=(t1+t2)/2;t1=md;
    ++c;
    if(c>=2)
    {
        md=md-1;
    }
    else md-=2;
   
}}
    return 0;
}





