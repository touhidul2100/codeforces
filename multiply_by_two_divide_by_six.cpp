#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    unsigned long long int n,i;
    cin>>n;
    bool flag=false;
    i=0;
    while(1)
    {
        if((n%6!=0&&n>6)||n==3)
        {

            n*=2;
            i++;

        }
        else if(n%6==0)
        {
            n/=6;
            i++;
        }
        if(n==1){flag=true;break;}
        if(n<6&&n!=3)break;
    }
    if(flag)
    cout<<i<<endl;
    else
    cout<<-1<<endl;}
}