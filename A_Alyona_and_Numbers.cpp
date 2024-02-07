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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,k;
    // cin>>test;
    // for(k=1;k<=test;k++){
        ll n,i,j,k,sm=0;
ll a,b;
cin>>a>>b;
ll ara[a+1][1];
for(i=1;i<=a;i++)
{
    ll tm=0;
    ll tc=5-(i%5);
    // for(j=tc;j<=b;j+=5)
    // {
    //     if((j+i)%5==0)tm++;
    //   //  cout<<i<<" "<<j<<" "<<tm<<nn;
    // }
    if(tc<=b){tm++;
    tm+=((b-tc)/5);}
// cout<<i<<" "<<tm<<nn;
sm+=tm;

}
cout<<sm<<nn;
    return 0;
}

