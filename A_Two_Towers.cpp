#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
ll n1,n2,i,j,k,c1=0,c2=0;
cin>>n1>>n2;
string st1,st2;
cin>>st1>>st2;
bool f1=1,f2=1,f=1;
for(i=0;i<n1-1;i++)
{
    if(st1[i]==st1[i+1])
    {
        c1++;
    }
    if(c1>=2)
    {
        f1=0;
        break;
    }
}
c2=0;
for(i=0;i<n2-1;i++)
{
    if(st2[i]==st2[i+1])
    {
        c2++;
    }
    if(c2>=2)
    {
        f2=0;
        break;
    }
}
 if(c1>=2 ||c2>=2)
{
    cout<<"NO"<<endl;

}
 else if(c1>=1 &&c2>=1)
{
    cout<<"NO"<<endl;

}
else if((c1>=1||c2>=1)&&st1[st1.size()-1]==st2[st2.size()-1])
{
    cout<<"NO"<<endl;
  
}
// else if(c2>=1st1.size()==1&&(st1[st1.size()-1]==st2[st2.size()-1]))
// {
//         cout<<"NO"<<endl;
 
// }
else 
cout<<"YES"<<endl;}
    return 0;
}

