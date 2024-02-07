#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pa make_pair
#define nn '\n'
#define $boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ok cout << "OK" << nn;
int main()
{
 
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    int  n, i,j,k;
   cin>>n;
   vector<pair<int ,int >>vpp;
   for(i=1;i<=n;i++)
   {
    cin>>k;
    vpp.pb(pa(k,i));
   }
   sort(vpp.rbegin(),vpp.rend());
   if(vpp[0].ff<=0)
   {
    cout<<n-1<<nn;
    for(i=n-1;i>0;i--)cout<<i<<" "<<i+1<<nn;
   }
   else 
   {
   
    cout<<2*n+3<<nn;
    for(j=0;j<5;j++)cout<<vpp[0].ss<<" "<<vpp[0].ss<<nn;
    j=vpp[0].ss;
    for(i=2;i<=n;i++)
    {
        cout<<i<<" "<<j<<nn<<i<<" "<<j<<nn;
        j=i;
    }
   }}
    return 0;
}
