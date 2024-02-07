#include<bits/stdc++.h>
using namespace std;

int solve(int ar[],int i,int n,int t)
{
    if(i>=n) return false;
    if(i+1==t) return true;
    int p=i+ar[i];

    return solve(ar,p,n,t);




}
int main()
{
   int n;
    int t;

    cin>>n>>t;

    int ar[n+3];

    for(int i=0;i<n-1;i++) cin>>ar[i];

    (solve(ar,0,n,t))?cout<<"YES"<<'\n':cout<<"NO"<<'\n';

    return 0;


}