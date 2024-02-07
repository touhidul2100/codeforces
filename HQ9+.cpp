#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int i;
    bool flag=0;
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]=='H'||st[i]=='Q'||st[i]=='9')
        {
            flag=true;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(!flag)
    cout<<"NO"<<endl;
}