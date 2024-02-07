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
// ll sum(ll n)
// {
//     ll sm=0;
//     while(n!=0)
//     {
//         sm+=(n%10);
//         n/=10;
//     }
//     return sm;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
ll n,i,j;
cin>>n;
ll tm=n;
ll cnt=0;
while(tm>=10)
{
if(tm%10==9)cnt++;
else break;
tm/=10;
//cout<<tm<<endl;
}
if(cnt==1 &&(n+1)%20==0)
{
    ll t1=(n+1)/10;
 ll p1=(t1-t1/2)*10+4;
   ll p2=n-p1;
   cout<<p1<<" "<<p2<<endl;
}

else if(cnt>1)
{
    //cout<<"YES"<<endl;
    ll alans;if(tm%2==0)alans=tm/2;else alans=(tm+1)/2;
    ll ans=5;ll an;if(cnt%2==0)an=5;else an=9;
    ll tm=1;
    ll t1=(cnt/2)-1;
   ll t2=cnt-1;
    while(t2--){ans*=10;alans*=10;}
while(t1--){an*=10;}
alans*=10;
   alans=alans+ans+(an-1);
    cout<<alans<<" "<<n-alans<<endl;
}
else 
{
    ll t1=n/2;ll t2=n-t1;
    cout<<t1<<" "<<t2<<endl;
}
    }
    return 0;
}

