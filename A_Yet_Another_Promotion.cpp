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
    ll test;
    cin>>test;
    while(test--){
ll a,b,r,am,s1=0,s2=0;
cin>>a>>b>>r>>am;
if(r<=am)
{
    cout<<min(a,b)*r<<endl;
   // continue;
}
else if(r>am && a>=b)
{
    ll tm=(r/(am+1));
    s1=(tm*a*am)+(r-(tm*(am+1)))*b;
    s2=r*b;
    cout<<min(s1,s2)<<endl;
    //continue;
}
else if(r>am &&a<b)
{
     ll t1=(r/(am+1));
    ll t2=(r%(am+1));
    ll s=(t1*a*am)+t2*a;
    cout<<s<<endl;
}}
    return 0;
}





