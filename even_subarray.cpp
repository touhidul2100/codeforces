#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
    int i,n;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
vector<int>::iterator it;
it=unique(v.begin(),v.end());
v.resize(distance(v.begin(),it));
int count=0;
if(v.size()==1)cout<<"YES"<<endl;
else{
for(i=0;i<v.size();i++)
{
    if(i==0)
    {
        if(v[i]<v[i+1])
        count++;
    }
    else if(i==v.size()-1)
    {
        if(v[i]<v[i-1])
        count++;
    }
    else{
if(v[i]<v[i-1]&&v[i]<v[i+1])
count++;
}
if(count>1)break;
}
if(count==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
    }
}