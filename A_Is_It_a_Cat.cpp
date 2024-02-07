#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, i, c = 0;
    string st;
    cin >> n >> st;
    i = 0;
    bool flag = 0;
while(1)
{
if((st[0]=='m'||st[i]=='M')&&(c==0||c==1))
{
st.erase(0,1);
if(c==0){c++;}

}
else if((st[0]=='e'||st[i]=='E')&&(c==1||c==2))
{
st.erase(0,1);
if(c==1){c++;}
}
else if((st[0]=='o'||st[i]=='O')&&(c==2||c==3))
{
st.erase(0,1);
if(c==2){c++;}
}
else if((st[0]=='w'||st[i]=='W')&&(c==3||c==4))
{
st.erase(0,1);
if(c==3){c++;}
}
else 
break;

}
    if(c==4&&st.empty()==1)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;

}
}