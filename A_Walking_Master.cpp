#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
   ll r1,c1,r2,c2,s;
   cin>> r1>>c1>>r2>>c2;
   if(c1==c2&&r1==r2){cout<<0<<endl;continue;}
   if(c2<c1){cout<<"-1"<<endl;
   continue;}
    s=c2-c1;
    if(r2-s>r1){cout<<"-1"<<endl;continue;}
    else
    cout<<r2-r1+2*((c2-c1)-(r2-r1))<<endl;}
}