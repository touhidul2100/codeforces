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
ll ans,x1,y1,x2,y2,n,m;
cin>>n>>m;
cin>>x1>>y1>>x2>>y2;
ll m1=min(x1,x2),m2=max(x1,x2),n1=min(y1,y2),n2=max(y1,y2);
if((x1==1 && y1==1)||(x1==n&& y1==m)||(x1==1&&y1==m)||(x1==n&&y1==1))cout<<2<<nn;
else if((x2==1 && y2==1)||(x2==n&& y2==m)||(x2==1&&y2==m)||(x2==n&&y2==1))cout<<2<<nn;
else if(m1==1||m2==n||n1==1||n2==m)
cout<<3<<nn;
else{
   cout<<4<<nn;

}}

    return 0;
}

