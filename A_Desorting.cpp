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
   cin>>n;vl v(n);read(v,n);
   ll diff=INT_MAX;
   ll l=0,r=0;
    for(i=1;i<n;i++)
    {
        diff=min(diff,v[i]-v[i-1]);
    }
    if(diff<0){
        cout<<0<<nn;
        continue;
    }
    if(diff%2)
    {
        cout<<(diff+1)/2<<nn;
    }
    else
    cout<<(diff+2)/2<<nn;

}
    return 0;
}
