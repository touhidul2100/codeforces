#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
	string st;
	vector<string>vs;
	map<string,bool>mp;
	for(i=0;i<n;i++)
	{
		cin>>st;
		vs.pb(st);
		mp[st]=true;
	}
	vector<bool>final;
	for(i=0;i<n;i++)
	{
		bool asa=0;
		for(j=0;j<vs[i].size();j++)
		{
			string pre=vs[i].substr(0,j);
			string suf=vs[i].substr(j,(vs[i].size()-j));
			// cout<<"i="<<i<<" j="<<j<<nn;
			// cout<<pre<<" "<<suf<<nn;
			if(mp[pre]&&mp[suf]){asa=1;break;}
		}
		final.pb(asa);
	}
	for(i=0;i<final.size();i++)cout<<final[i];cout<<nn;}
    return 0;
}
