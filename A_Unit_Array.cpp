#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vl v(n);read(v,n);
    ll pl=0,mn=0;
    for(i=0;i<n;i++)
    {
        if(v[i]==1)pl++;
        else mn++;
    }
    if( (mn%2==0 && mn<=pl))
    {
        cout<<0<<nn;
    }
    else if(mn%2==1 && mn<=pl)
    {
        cout<<1<<nn;
    }
    else if(mn>pl)
    {
        
            ll t1=(n+1)/2;
            ll ans=(t1-pl);
            ll t2=mn-ans;
            if(t2%2==1)ans++;
            cout<<ans<<nn;
       
    }}
    return 0;
}
