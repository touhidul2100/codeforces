// #include <bits/stdc++.h>
// using namespace std;
// int cv(vector<int>&v1,vector<int>&v2)
// {
//     // sort(v1.begin(),v1.end());
//     //  sort(v2.begin(),v2.end());
//     //  vector<int>v(v1.size()+v2.size());
//     //  vector<int>::iterator it;
//     //  it=set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
//     //  int c=it-v.begin();
//     // // cout<<c<<endl;
//     //  return c;
//     vector<int>v;
//     for(int i=0;i<v1.size();i++)
//     {
// v.push_back(v1[i]);
// v.push_back(v2[i]);
//     }
//     sort(v.begin(),v.end());
//     auto it=unique(v.begin(),v.end());
//     return it-v.begin();

// }

// int main()
// {
//     int test;
//     cin>>test;
//     while(test--){
//     int n, m, i, j, k, x, y,tem,count=0;
//     vector<int> v, v1, v2;
//     vector<pair<int, int>> pv;
//     vector<vector<int>>vv,fv;
//     cin>>n>>m;
//     tem=(n*(n+1))/2;
//     for (i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//       vv.push_back(v);
//     for (i = 0; i < m; i++)
//     {
//         cin >> x >> y;
// v[x-1]=y;
//         // pair<int, int> p;
//         // p = make_pair(x, y);
//         // pv.push_back(p);
//  vv.push_back(v);
//     }
  
//     // for(i=0;i<m;i++)
//     // {
//     //     v[pv[i].first-1]=pv[i].second;
       
//     // }
//     int ss=vv.size();
//     for(i=0;i<ss-1;i++){
//         for(j=i+1;j<ss;j++){
//         int c=cv(vv[i],vv[j]);
//         count+=c;
//     }}
// cout<<count<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std; 
const int inf=0x3f3f3f3f;
const long long INF=0x3f3f3f3f3f3f3f3f;
const int maxn=2e5+50;
const int mod=998244353;
const int Mod=1e9+7;
typedef long long ll;
ll a[maxn];
int main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	ll T;
	cin >> T;
	while (T--)
	{
		ll n,m;
		cin >> n >> m;
		for (int i=1; i<=n; i++) cin >> a[i];
		map <ll,ll> lst,had;
		ll ans=0,sum=0;
		for (int i=1; i<=m; i++)
		{
			ll x,y;
			cin >> x >> y;
			ll tmp=i-lst[a[x]]+had[a[x]];
            //cout<<tmp<<endl;
			sum+=tmp;
			had[a[x]]=tmp;
			sum-=had[y];
			lst[y]=i;
			ans=ans+(n*i+sum);
			a[x]=y;
		//	cout << ans << " " << sum << "\n";
		}
		cout << ans << "\n";
	}
	
}