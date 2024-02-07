#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--){
    int n,i;
    string st,s="";
    for(i=20;i<=50;i++)
    {
        if(i%3==0)s+='F';
        if(i%5==0)s+='B';

    }
    cin>>n>>st;
    if(s.find(st)<s.length())
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}