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
    ll t;
    cin>>t;
    while(t--){
 ll i,j,k,l,n,sum,ans,sm,mid;
 cin>>n;
ll ara[n];
for(j=0;j<n;j++)
{
    cin>>ara[j];
}
 ll first=0, last=n-1;
 while(first<=last)
 {sum=0;
mid=first+(last-first)/2;


cout<<"? "<<(mid-first+1)<<" ";
for(i=first;i<=mid;i++)
{
    cout<<i+1<<" ";
    sum+=ara[i];
}
cout<<endl;

// cout.flush();
fflush(stdout);

cin>>sm;
if(first==last &&sum<sm){mid=first+1;break;}
if(sm>sum)
{
   last=mid;
}
else
{
    first=mid+1;
   // last=last;
}
 }
 cout<<"! "<<mid<<endl;
fflush(stdout);}
    return 0;
}
