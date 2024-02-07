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
 ll n,i,m,j,sum=0,ans=0;
 cin>>m;
 n=2*m;
vl v(n);
read(v,n);
for(i=0;i<n;i++)
{

ans+=abs(v[i]);
sum+=abs(v[i]-(-1));
}

if(m==1)
ans=min(ans,abs(v[0]-v[1]));
if(m==2)
{
	ans=min(ans,abs(v[0]-2)+abs(v[1]-2)+abs(v[2]-2)+abs(v[3]-2));
}
if(m%2==0)
{
	for(i=0;i<n;i++)
	{
		ans=min(ans,sum-abs(v[i]-(-1))+abs(v[i]-m));
		//cout<<v[i]<<" "<<ans<<endl;
	}
}
cout<<ans<<endl;}
    return 0;
}

