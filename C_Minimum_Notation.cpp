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
ll n,i,j;
string st;
cin>>st;
vl v;
ll mn=9,m=9;
for(i=st.size()-1;i>=0;i--)
{
	j=st[i]-'0';

	v.pb(min(j+(j>mn),m));

	mn=min(j,mn);

}
sort(all(v));
for(auto x:v)cout<<x;cout<<nn;}
 
    return 0;
}

