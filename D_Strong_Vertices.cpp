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
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;vl v1(n),v2(n),v(n);
    read(v1,n);read(v2,n);
    for(i=0;i<n;i++)
    {
        v[i]=v1[i]-v2[i];
    }
    ll mxx=mx(v);ll cnt=0;vl ans;
    for(i=0;i<n;i++)
    {
        if(v[i]==mxx)ans.pb(i+1);
    }
    cout<<ans.size()<<nn;
    show(ans);}
    return 0;
}
