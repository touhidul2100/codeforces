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
#define M 10000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n>>k;
    ll v[k][n];
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    set<ll>s;
    for(i=0;i<k;i++)
    {
        for(j=0;j<n-1;j++)
        {
            ll a=min(v[i][j],v[i][j+1]);
            ll b=max(v[i][j],v[i][j+1]);
            s.insert(a,b);
        }
    }
    ll x=((n-1)*n)/2;
    cout<<x-s.size()<<nn;
    return 0;
}
