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
    {                       \
        cout << val << " "; \
        cout << endl;       \
    }
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
    ll test,ttst;
    cin>>test;
    for(ttst=1;ttst<=test;ttst++){
    ll n, i, j, k, sm = 0;
    cin >> n;
 vector<vector<ll>>v(n, vector<ll>(n));
 bool f=0;
 ll l=1,r=n*n;
 for(i=0;i<n;i++){
 for(j=0;j<n;j++)
 {
    if(!f)v[i][j]=r--;
    else v[i][j]=l++;
   f= !f;
 }
 if(i&1)
 {
    reverse(v[i].begin(),v[i].end());
 }
 }
 for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<nn;}
 }
    return 0;
}
