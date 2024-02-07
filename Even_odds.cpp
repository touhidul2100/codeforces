#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long int n,k,i,half;
    cin>>n>>k;
   if(n%2==0)
   half=n/2;
   else
   half=(n+1)/2;
   if(k<=half)
   cout<<2*k-1<<endl;
   else
   {
    i=k-half;
    cout<<2*i<<endl;
   }
}