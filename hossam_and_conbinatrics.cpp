#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    unsigned long long int n,i,c1=0,c2=0,c=0;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int n1=*min_element(v.begin(),v.end());
    int n2=*max_element(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[i]==n2&&v[i]==n1)
        c++;
    
         else if(v[i]==n1)
        c1++;
       else  if(v[i]==n2)c2++;

    }
   
    if(c==n)
    {
        cout<<c*(c-1)<<endl;
    }
    else
    cout<<2*c1*c2<<endl;
}
return 0;}