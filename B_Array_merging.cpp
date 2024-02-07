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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vl v1(n);vl v2(n);
    read(v1,n);read(v2,n);
    ll ans=0;
    unordered_map<ll,ll>mp1;
    unordered_map<ll,ll>mp2;
    ll cnt=1;
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
             mp1[v1[i-1]]=max(cnt,mp1[v1[i-1]]);
             break;
        }
        if(v1[i]==v1[i-1])cnt++;
        else
        {
            mp1[v1[i-1]]=max(cnt,mp1[v1[i-1]]);
            cnt=1;
        }
    }
cnt=1;
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
             mp2[v2[i-1]]=max(cnt,mp2[v2[i-1]]);
             break;
        }
        if(v2[i]==v2[i-1])cnt++;
        else
        {
            mp2[v2[i-1]]=max(cnt,mp2[v2[i-1]]);
            cnt=1;
        }
    }
   for(i=0;i<n;i++)
   {
    ans=max(ans,(mp1[v1[i]]+mp2[v1[i]]));
   }
   for(i=0;i<n;i++)
   {
    ans=max(ans,(mp1[v2[i]]+mp2[v2[i]]));
   }
   cout<<ans<<nn;
    }
    return 0;
}
