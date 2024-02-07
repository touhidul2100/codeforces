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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vl v(n);read(v,n);
    vl ans(n,0);
    for(i=0;i<n;i++)
    {
   
        ll index=i+1;
        for(j=i+1;j<n;j++)
        {
            if(v[j]>v[index])
            {
                index=j;
            }
        }
      
        vl curr;
        for(k=index;k<n;k++)
        {
            curr.pb(v[k]);
        }
        for(k=index-1;k>=i;k--)
        {
            curr.pb(v[k]);
        }
        for(k=0;k<i;k++)
        {
            curr.pb(v[k]);
        }
        ans=max(curr,ans);
 
     
    }
show(ans)}
    return 0;
}
