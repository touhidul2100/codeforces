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
    ll n,x, i, j, k, sm = 0,cnt=0;
    cin>>n>>x; vl v(n);read(v,n);
    ll l=v[0];ll r=v[0];
    for(i=1;i<n;i++)
    {
         l=min(l,v[i]);
        r=max(r,v[i]);
        if((r-l)>2*x)
        {
          cnt++;
          l=r=v[i];
        }

    }
    cout<<cnt<<nn;}
    return 0;
}

