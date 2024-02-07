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
#define lp(i,n) for(i=0;i<n;i++)
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
    ll n,i,m,j,x,k;
    cin>>n>>m;
    vl v[n+1];
    vl v1;
   lp(i,n)
   {
    lp(j,m)
    {
        cin>>x;
        v[i].push_back(x);
    }
   }
   ll sum=0;
   lp(i,m)
   {
    lp(j,n)
    {
        v1.pb(v[j][i]);
    }
    sort(all(v1));
   for(k=0;k<n;k++)
   {
    sum=sum+(k-n+1+k)*v1[k];
   }
   v1.clear();
   }
   cout<<sum<<endl;}
    return 0;
}

