#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)         \
    for (auto &val : _a) \
        cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
// #define for(i,n) for(i=0;i<n;i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n, i, j;
    cin >> n;
    vl v(n),v5;
    read(v, n);
    ll m = mn(v);
  
        bool f=0;
        for(i=0;i<n;i++)
        {
            if(v[i]<=i+1)
            {
                cout<<"YES"<<endl;
                f=1;break;
            }
            if(f)break;

        }
        if(!f)cout<<"NO"<<endl;
    }
    return 0;
}
