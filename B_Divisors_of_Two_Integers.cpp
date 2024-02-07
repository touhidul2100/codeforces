#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define ff first
#define ss second
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 ll i,j,m,n;
 vi v,v1,v2;
cin>>n;
for(i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
v1=v;
sort(v.begin(),v.end());
auto it=unique(v.begin(),v.end());
v.resize(distance(v.begin(),it));
ll max1=*max_element(v.begin(),v.end());
// //v.erase(std::remove(v.begin(), v.end(), max), v.end());
ll sz=v.size();
for(i=0;i<sz;i++)
{
   if(max1%v[i]==0)
   {
   //v.erase(remove(v.begin(),v.end(),x),v.end());
    v2.push_back(v[i]);
   }
}
// cout<<"for v2"<<endl;
// for(auto x:v2)
// {
//     cout<<x<<" ";
// }
// cout<<endl;
ll ss=v2.size();
// cout<<"for v1"<<endl;
// for(auto x:v1)
// {
//     cout<<x<<" ";
// }
// cout<<endl;
for(i=0;i<ss;i++)
{
 auto it=find(v1.begin(),v1.end(),v2[i]);
 if(it!=v1.end())
 {
    v1.erase(it);
 }
    
}
// cout<<" after for v1"<<endl;
// for(auto x:v1)
// {
//     cout<<x<<" ";
// }
ll max2;
//cout<<" size="<<v1.size()<<endl;
if(v1.size()>1){
max2=*max_element(v1.begin(),v1.end());
}
 else {max2=*min_element(v2.begin(),v2.end());}
cout<<max1<<" "<<max2<<endl;
    return 0;
}
