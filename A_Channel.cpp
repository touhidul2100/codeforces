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
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b,q, j, k, sm = 0;
    cin>>n>>a>>q;
string st;cin>>st;
bool f=0;
ll s1=a;
for(i=0;i<q;i++)
{
if(s1>=n){f=1;break;}
if(st[i]=='+')s1++;
else s1--;
}
//cout<<s1<<nn;
if(f || s1>=n){cout<<"YES"<<nn;
continue;
}
s1=a;
for(i=0;i<q;i++)
{
if(st[i]=='+')s1++;
}

if(s1>=n)
{
    cout<<"MAYBE"<<nn;
}
else cout<<"NO"<<nn;}
    return 0;
}
