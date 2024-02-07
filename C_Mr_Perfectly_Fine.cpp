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
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
        ll n,i,j,k,sm=0,a=1000001,b=1000001,c=1000001;
cin>>n;
vl one;vl two,al;
string st;
for(i=0;i<n;i++)
{
    cin>>j>>st;
    if(st[0]=='1'&& st[1]=='0'){a=min(a,j);}
    else if(st[0]=='0'&& st[1]=='1'){b=min(b,j);}
     else if(st[0]=='1'&& st[1]=='1'){c=min(c,j);}
}
ll ans=min((a+b),c);
if(ans<1000000)cout<<ans<<nn;
else cout<<-1<<nn;}
    return 0;
}

