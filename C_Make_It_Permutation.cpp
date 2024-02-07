#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
//#define for(i,n) for(i=0;i<n;i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
    ll n,rm,in,i,j,sm,tm;
    cin>>n>>rm>>in;
    vl v(n);read(v,n);
    sort(all(v));
    auto it=unique(all(v));
    v.resize(distance(v.begin(),it));
    ll st=v.size();
    ll cn=(n-st)*rm;
    sm=((v[0]-1)*in)+((v.size()-1)*rm)+cn;
    tm=sm;
    sm=(st*rm)+in+cn;
    sm=min(sm,tm);
    ll mn=mn(v),mx=mx(v);
    for(i=1;i<v.size();i++)
    {
     tm=sm;
    sm=(v[i]-(i+1))*in+((v.size()-i-1)*rm)+cn;
    sm=min(sm,tm);
    }
    cout<<sm<<endl;}
    return 0;
}

