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
    ll t;
    cin>>t;while(t--){
 ll n,i,j,sm=0;
 cin>>n;vl v(n);read(v,n);
 sort(all(v));
 for(i=0;i<n;i+=2)
 {
    if(max(v[i],v[i+1])>=2)
    {
        sm=sm+(n-i);break;
    }
    else sm+=1;
 }
 cout<<sm<<nn;}
    return 0;
}

