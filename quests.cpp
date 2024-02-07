#include<bits/stdc++.h>
using namespace std;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
 
// template<class T>using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
// //cout<<s.order_of_key(5)::Number of items strictly smaller than k
// //cout<<*s.find_by_order(0)::K-th element in a set (counting from zero)
 
#define mp make_pair
#define pb push_back
#define ll long long
#define Fast ios::sync_with_stdio(0);cin.tie(0)
 
// bool cmp(pair<int,int>a,pair<int,int>b)
// {
//     if(a.first!=b.first){
//         if(a.first>b.first)
//             return true;
//         return false;
//     }
//     else{
//         if(a.second<b.second)
//             return true;
//         return false;
//     }
// }
void solved()
{
    ll n,c,d;
    cin>>n>>c>>d;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    ll l=0,r=d;
    if(a[0]*d*1ll<1ll*c)
    {
       cout<<"Impossible";return;
    }
    ll ans=-1;
    while(l<=r)
    {
       ll mid = (l+r)/2;// day
 
       ll cnt = d/(mid+1);
       ll cnt1 =d%(mid+1);
       ll sum=0,sum1=0;
       for(int i=0;i<min(mid+1,n);i++)
         sum+=a[i];
       for(int i=0;i<min(cnt1,n);i++)
         sum1+=a[i];
 
       sum*=cnt;
       sum+=sum1;
       if(sum>=c)
       {
          // increase day
          l =mid+1;
          ans=mid;
       }
       else
       {
          r=mid-1;
       }
 
    }
 
    //cout<<((ans>=d*1ll)?"Impossible":ans)<<endl;
    if(ans==-1)
    {
       cout<<"Impossible";return;
    }
    if(ans>=d)
    {
      cout<<"Infinity";
    }
    else
    {
      cout<<ans;
    }
}
int main()
{
  // Fast;
   int t=1;
   cin>>t;
   while(t--)
   {
      solved();
      cout<<'\n';
   }
 
}