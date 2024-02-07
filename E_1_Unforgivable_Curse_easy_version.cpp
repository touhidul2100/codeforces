#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
    int n1,n2,i;
    string st1,st2;
    cin>>n1>>n2;
    cin>>st1>>st2;
    for(i=0;i<n1;i++)
    {
        if(st1[i]!=st2[i])
        {
            if(st1[i+n2]==st2[i])
            swap(st1[i+n2],st1[i]);
            else  if(st1[i+n2+1]==st2[i])
            swap(st1[i+n2+1],st1[i]);
        }
    }
    if(st1==st2)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}}