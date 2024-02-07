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
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i,m,a,b, j, k, sm = 0;
   cin>>n;
   ll ara[n+1];
   for(i=1;i<=n;i++)cin>>ara[i];
   for(i=1;i<=n;i++)
   {
    if(i>1 && ara[i-1]>0)
    {
        continue;
       // ara[i-1]--;
    }
    else if(ara[i]==0 && i<n && ara[i+1]>0)ara[i+1]--;
    else sm++;
   }
   cout<<sm<<nn;
   
    return 0;
}
