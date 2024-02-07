#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vl v(n);read(v,n);sort(all(v));
    vl sto, bro;
    for(i=0;i<n/2;i++)
    {sto.pb(v[i]);}
    for(;i<n;i++){bro.pb(v[i]);}
    //show(sto);show(bro);
 bool f=1;
 sto.pb(sto[0]);
 for(i=0;i<n/2;i++)
 {
    //cout<<sto[i]<<" "<<bro[i]<<" ";
    if(bro[i]<=sto[i] || bro[i]<=sto[i+1])
    {
        f=0;break;
    }
 }
 if(n&1 && f==1)
 {
   f=0;
 }
 if(!f)
 {
    cout<<"NO"<<nn;
 }
 else{
    cout<<"YES"<<nn;
     for(i=0;i<n/2;i++)
 {
    cout<<sto[i]<<" "<<bro[i]<<" ";
 }
 cout<<nn;
 }}
    return 0;
}
