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
        ll n,i,j,sm=0;
       ll  cnt=0;
string st;
cin>>st;
for(i=0;i<st.size();i++)
{
    if(st[i]=='?')
cnt++;
}
if(st[0]=='0'){cout<<0<<nn;
continue;
}
if(st[0]=='?')
{
    ll km=cnt-1;
    
    ll dg=9;
    while(km--)dg*=10;
    // dg-=1;
    // if(km>0)dg-=9;
    cout<<dg<<nn;
    continue;
}
if(cnt>0)
{
    ll dm=1;
    while(cnt--)dm*=10;
    cout<<dm<<nn;
    continue;
}
else
{
    cout<<1<<nn;
    continue;
}}
    return 0;
}

