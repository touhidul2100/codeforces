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
        ll n,i,j,k,sm=0;
cin>>n;vl a(n),b(n);read(a,n);read(b,n);sort(all(a));sort(all(b));
vl ac(6,0);vl bc(6,0);
for(i=0;i<n;i++)
{
ac[a[i]]++;
bc[b[i]]++;
}
ll f=0;
ll ans=0;
for(i=1;i<6;i++)
{
    if((ac[i]+bc[i])%2==1)
    {
        f=1;
        break;
    }
    else 
    {
        ll t1=max(ac[i],bc[i])-min(ac[i],bc[i]);
        ans+=(t1/2);
    }
}
if(f)cout<<-1<<nn;
else if(ans&1)cout<<-1<<nn;
else cout<<ans/2<<nn;
    return 0;
}

