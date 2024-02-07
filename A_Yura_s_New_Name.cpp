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
        ll n,i,j,sm=0,ans=0;
string st;
cin>>st;
if(st[0]=='_')ans++;
bool f=0;
for(i=1;i<st.size();i++)
{
    if(st[i]=='_'&& (st[i-1]=='_'&&f==0))
    {
ans++;
    }
    // if(i!=st.size()-1){
    if(st[i]=='_'&&st[i+1]=='_')
    {
        ans++;f=1;
    }
    else f=0;
}
if(st[st.size()-1]=='_')ans++;
if(st.size()==1 && st[0]=='^')ans++;
cout<<ans<<nn;}
    return 0;
}


