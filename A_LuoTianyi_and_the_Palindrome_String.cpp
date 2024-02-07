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
bool palin(string st)
{
    bool f;
    string s=st;
    reverse(st.begin(),st.end());
    if(s==st)f=1;
    else f=0;
    return f;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
        ll n,i,j,sm=0;
string st;
cin>>st;
ll k=st.size();
if(k==1 ||k==2)
{
    cout<<-1<<nn;
    continue;
}
if(k&1)
{
    bool f=0;
    for(i=0;i<(k/2);i++)
    {
        if(st[i]!=st[i+1])
        {

            f=1;
            break;
        }
    }
    if(f){cout<<k-1<<nn;}
    else cout<<-1<<nn;
}
else{
      bool f=0;
    for(i=0;i<(k/2);i++)
    {
        if(st[i]!=st[i+1])
        {

            f=1;
            break;
        }
    }
    if(f){cout<<k-1<<nn;}
    else cout<<-1<<nn;
}}
    return 0;
}

