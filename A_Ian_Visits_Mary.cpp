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
ll g=__gcd(a,b);
if(g>1){
    cout<<2<<nn;
    cout<<1<<" "<<b-1<<nn;
    cout<<a<<" "<<b<<nn;

    }
    else
    cout<<1<<nn<<a<<" "<<b<<nn;}
    return 0;
}

