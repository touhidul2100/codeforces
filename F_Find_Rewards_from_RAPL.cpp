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
ll adda(vector<ll>v,set<ll>s)
{
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    return s.size();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
  ll n,m,i,j,k,l,x,y;
 cin>>n>>m;
 vl v(n),v5(n);
 read(v,n);
 set<ll>s;
 vector<pair<ll,ll>>v2;
 for(i=0;i<m;i++)
{
    cin>>x>>y;
    pair<ll,ll>p;
    p=make_pair(x,y);
    v2.push_back(p);

}

for(i=0;i<m;i++)
{

    v[v2[i].first-1]+=v2[i].second;
   cout<< adda(v,s)<<endl;
  

}}
    return 0;
}

