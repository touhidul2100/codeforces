#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n, m, j, i;
    cin >> n >> m;
    vl v1(n), v2(n);
    read(v1, n);
    v2 = v1;
    sort(all(v1));
    sort(all(v2), greater<ll>());
    vl v[m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < 3; j++)

        {
            ll x;
            cin >> x;
            v[i].pb(x);
        }
    }
    for (i = 0; i < m; i++)
    {
        ll val;
       // show(v1)
    auto n1=lower_bound(all(v1),v[i][1]);
    ll in=n1-v1.begin();
    if(in<v1.size())
     val=v1[in];
     else val=v1[in-1];
    if(((v[i][1]-val)*(v[i][1]-val))<(4*v[i][0]*v[i][2]))
    {
        // cout<<"lp1:"<<nn;
        // cout<<in<<" "<<val<<nn;
        cout<<"YES"<<endl;
        cout<<val<<endl;continue;
    }
    in=n1-v1.begin()-1;
    if(in>0)
     val=v1[in];
     else val=v1[0];
    if(((v[i][1]-val)*(v[i][1]-val))<(4*v[i][0]*v[i][2]))
    {
       // cout<<"lp 2:"<<nn;
        cout<<"YES"<<endl;
        cout<<val<<endl;continue;
    }
    else 
    cout<<"NO"<<endl;
  
  
    }
    cout<<endl;
}
    return 0;
}
