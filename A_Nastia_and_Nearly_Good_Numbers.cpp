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
ll a,b,i,j;
cin>>a>>b;
if(b==1){cout<<"NO"<<nn;
continue;
}
ll c=a*b;
if(b>2){cout<<"YES"<<nn;
cout<<(b-1)*a<<" "<<a<<" "<<a*b<<nn;}
else 
{
    ll x=b*a*3;
    cout<<"YES"<<nn;
    cout<<x-a<<" "<<a<<" "<<x<<nn;
}
}
    return 0;
}

