#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--){
    ll n,i,j,ans,l,r;
    cin>>l>>r;
    ll dif=0,cnt=0;
    for(i=l;i<=r;i++)
    {
        cnt++;
        if(cnt==1000)break;
        string s=to_string(i);
        char mn='9';
        char mx='0';

        for(auto x:s)
        {
            mx=max(x,mx);
            mn=min(mn,x);
        }
        if(abs(mx-mn)>=dif)
        {
           ans=i;
            dif=abs(mx-mn);
        }
    }
    cout<<ans<<endl;}
} 
