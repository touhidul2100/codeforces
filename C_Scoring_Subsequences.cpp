#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
  ll n,i,j,k,m;
  cin>>n;
  vl v;
  for(i=0;i<n;i++)
  {
    cin>>j;
    v.push_back(j);
  }
queue<ll>q;
for(i=0;i<n;i++)
{
    q.push(v[i]);
    if(q.front()<q.size())
    {
        q.pop();
    }
    cout<<q.size()<<" ";
}
cout<<endl;}
    return 0;
}
