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
 ll n,k;
 cin>>n>>k;
 if(n%2==1 && k%2==0)cout<<"NO"<<nn;
//  else if(n%2==0 && k%2==1)
//  {
//     if(n>=2*k)cout<<"YES"<<nn;
//     else cout<<"NO"<<nn;
//  }
 else  cout<<"YES"<<nn;}
    return 0;
}

