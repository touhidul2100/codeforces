#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";cout<<endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
ll n,i,j,c1=0,c2=0,a,b;
 cin>>n;
 string st;
 cin>>st;
 for(i=0;i<n;i++)
 {
    if(st[i]=='R')c1++;
    else c2++;
 }
 if(c1==n||c2==n){cout<<-1<<nn;continue;}
 for(i=0;i<n;i++)
 {
    if(st[i]=='R')
    {
        a=i;
        if(i!=0)
        {
            st[i]='L';
            st[0]='R';
        }
break;
    }
 }
//  for(i=n-1;i>=0;i--)
//  {
//     if(st[i]=='L')
//     {
// b=i;break;
//     }
//  }
 cout<<a<<nn;}
    return 0;
}

