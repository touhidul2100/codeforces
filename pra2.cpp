#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
ll md= 1e9+7;
vl adj[N];
unordered_map<ll,ll>mp;
bool visited[N];
ll ara[N];
ll inv(ll b)
{
	ll n=md-2;
	ll ans=1;
	while(n)
	{
		if(n&1)
		ans*=b;
		ans%=md;
		b*=b;b%=md;
		n/=2;
	}
	return ans;
}
ll fact(ll n)
{
	if(n==0||n==1)return 1;
	return((n%md)*(fact(n-1)%md))%md;
}
void dfs(ll node)
{
	visited[node]=1;
	mp[ara[node]]++;
	for(auto x:adj[node])
	{
		if(!visited[x])
		{
			dfs(x);
		}
	}
}
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
    cin >> Cases;
	for(ll Test = 1; Test <= Cases; Test++){
		// cout << "Case " << Test << ": ";
	ll n, i,m,a,b, j, k, sm = 0;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		adj[a].pb(b);adj[b].pb(a);
	}
	for(i=1;i<=n;i++)cin>>ara[i];
	memset(visited,0,sizeof(visited));
	ll ans=fact(n);
	for(i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			mp.clear();
			dfs(i);
			ll len=0;
			for(auto x:mp)
			{
				len+=x.ss;
				ans*=fact(x.ss);
				ans%=md;
			}
			ll tm=fact(len);
			ans*=inv(tm);
			ans%=md;
		}
	}
	
	cout<<ans<<nn;
	for(i=1;i<=n;i++)adj[i].clear();
   } return 0;
}
