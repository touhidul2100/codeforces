#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n,i,c1=0,c2=0;
    cin>>n;
    vector<int>v;

for(i=0;i<n;i++)
{
int x;cin>>x;v.push_back(x);
}
for(i=0;i<n;i++)
{
    if(v[i]%2==0)c1++;
    else c2++;
}



if(c2%2==0)cout<<c1<<endl;
else if(c2%2==1) cout<<c2<<endl;
}