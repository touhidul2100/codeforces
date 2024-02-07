#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>v,v1;

for(i=0;i<n;i++)
{
int x;cin>>x;v.push_back(x);
}
v1=v;
sort(v.begin(),v.end());
int c=0;
int min1=v[0];
for(i=0;i<n;i++)
{
    if(v[i]==v[0])
    c++;
    if(c>1&&v[i]>v[0])break;
}
if(c>1)cout<<"Still Rozdil" <<endl;
else
{
    auto j=find(v1.begin(),v1.end(),min1);
    int it=j-v1.begin();
     cout<<it+1<<endl;
   
}
}