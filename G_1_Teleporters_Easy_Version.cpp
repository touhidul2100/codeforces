#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n,c, i, j, k, sm = 0;
cin>>n>>c;
vl v;
for(i=0;i<n;i++)
{
    cin>>k;
    v.pb(k+i+1);
}
 sort(all(v));
ll cnt=0;
for(i=0;i<n;i++)
{
   
sm+=v[i];
if(sm<=c){cnt++;}
else break;
}
cout<<cnt<<nn;}
    return 0;
}
