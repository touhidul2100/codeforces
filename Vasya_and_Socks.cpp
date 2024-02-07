#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,m,sum,i,tem;
    cin>>n>>m;
    sum=n;
    i=m;
    while(1)
    {
       
        if(i<=sum)
        {sum++;i+=m;}
      else  if(i>sum)
       { break;}
    }
    cout<<sum<<endl;

}