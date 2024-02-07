#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss,st1,st2,st3;
    st1="qwertyuiop";
    st2="asdfghjkl;";
    st3="zxcvbnm,./";
    ss=st1+" "+st2+" "+st3;
    char s;
    string st;
    cin>>s;
    cin>>st;
    if(s=='R')
    {
        for(int i=0;i<st.size();i++)
        {
            char c=st[i];
            size_t found=ss.find(c);
            cout<<ss[found-1];
        }
        cout<<endl;
    }
    if(s=='L')
    {
        for(int i=0;i<st.size();i++)
        {
            char c=st[i];
            size_t found=ss.find(c);
            cout<<ss[found+1];
        }
        cout<<endl;
    }

}