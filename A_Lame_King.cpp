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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
 ll a,b,i,j,s;
 cin>>a>>b;
 a=abs(a);b=abs(b);
 if(a==b)cout<<2*a<<endl;
 else if(a>b)cout<<2*a-1<<endl;
 else cout<<2*b-1<<endl;

}
    return 0;
}

