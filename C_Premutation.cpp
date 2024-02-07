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
    ll n, i, j, k, sm = 0;
cin>>n;
ll ara[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    cin>>ara[i][j];
}
ll a1=0,b1=0,an1,bn1;
bool f1=0,f2=0;
for(i=0;i<n;i++)
{
    if(ara[i][0]==ara[0][0]){a1++;an1=i;}
     if(ara[i][0]!=ara[0][0]){b1++;bn1=i;}
     if(a1>1&&b1>0)
     {
        f1=1;break;
     }
     if(a1>0&&b1>1){f2=1;break;}
}

if(f1)
{
    cout<<ara[an1][0]<<" ";
    for(i=0;i<n-1;i++)
    cout<<ara[bn1][i]<<" ";
    cout<<nn;
}
else
{
    cout<<ara[bn1][0]<<" ";
    for(i=0;i<n-1;i++)
    cout<<ara[an1][i]<<" ";
    cout<<nn;
}}
    return 0;
}
