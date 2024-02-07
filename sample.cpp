#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, i,m, j, k, sm = 0;
   n=4;
    ll profits[]={100,10,15,27};
    ll deadline[]={1,1,2,1};
vector<pair<pair<ll,ll>,ll>>v;
ll highest_day=0;
for(i=0;i<n;i++)
{
    v.push_back({{profits[i],i+1},deadline[i]});
    highest_day=max(highest_day,deadline[i]);
}
sort(v.begin(),v.end(),[](const pair<pair<ll,ll>,ll> &p1,const pair<pair<ll,ll>,ll> &p2)
{
return (p1.first.first==p2.first.first)?(p1.second<p2.second):(p1.first.first>p2.first.first);
});
bool block[highest_day+5];for(i=1;i<=highest_day;i++)block[i]=0;
ll ans[highest_day+5];
ll profit[highest_day+5];
for(auto x:v)
{
    ll day=x.second;
    for(i=day;i>0;i--)
    {
        if(!block[i])
        {
            ans[i]=x.first.second;
            profit[i]=x.first.first;
            block[i]=1;
            break;
        }
    }
}
ll total=0;
for(i=1;i<=highest_day;i++)
{
    total+=profit[i];
    cout<<"Day="<<i<<" job no="<<ans[i]<<" profit="<<profit[i]<<endl;
}
cout<<"total optimal profit="<<total<<endl;
   return 0;
}
