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
    cin>>t;
    while(t--){
 ll n,i,j,l,r;
 cin>>n;
 vl v(n+1);
 for(i=0;i<n;i++)
 {
    cin>>j;
    v[j]=i;
 }

 l=(n+1)/2;r=(n+2)/2;
 while(l>0&&(l==r||(v[l]<v[l+1]&&v[r]>v[r-1])))
 {
    --l;++r;
 }
 cout<<(n-r+l+1)/2<<nn;}
    return 0;
}

