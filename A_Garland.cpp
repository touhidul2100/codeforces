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
ll n,i,j,ans;
string st;
cin>>st;
vl v(4),v5;
for(i=0;i<4;i++)
{
v[i]=st[i]-'0';
}
sort(all(v));
v5=v;
// show(v);
auto it=unique(all(v));
v.resize(distance(v.begin(),it));

if(v.size()==1)cout<<-1<<endl;
else if(v.size()==2)
{
    ll c1=0,c2=0;
    for(i=0;i<4;i++)
    {
        if(v5[i]==v[0])c1++;
       else if(v5[i]==v[1])c2++;
    }
    if(c1==c2)cout<<4<<endl;
    else cout<<6<<endl;
}
else if(v.size()==4||v.size()==3)cout<<4<<endl;
}
    return 0;
}
