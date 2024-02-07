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
#define ok cout<<"OK"<<nn;
//#define for(i,n) for(i=0;i<n;i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,x,y;
    ll t;
    cin>>t;
    while(t--){
    cin>>n;
    if(n%2==1)
    cout<<-1<<endl;
    else cout<<1<<" "<<n/2<<endl;}
    return 0;
}

