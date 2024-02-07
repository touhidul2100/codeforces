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
ll n,sum1=1,sum2=0;
cin>>n;
n-=1;ll tm=5;
while(n>0)
{
    if(n>=tm){
sum2=sum2+tm;n=n-tm;tm+=4;}else {sum2+=n;break;}
if(n>=tm){
sum1+=tm;n-=tm;tm+=4;}else {sum1+=n;break;}
}
cout<<sum1<<" "<<sum2<<endl;}
    return 0;
}

