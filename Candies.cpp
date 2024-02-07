#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    unsigned long long int n,x,k,tem,sum,i;
    cin>>n;
    tem=2;
    sum=1;
    //i=1;
    while(1)
    {
        sum=sum+tem;
       // i++;
        tem*=2;
        if(n%sum==0||sum>n)
        {
            cout<<(n/sum)<<endl;
            break;
        }
    }}
}