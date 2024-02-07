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
    cin>>n>>k;
    string st;
    cin>>st;
    ll ans1=0,ans2=0;
    ll lc=0;
    for(i=0;i<n;)
    {
        if(st[i]=='B')
       { i+=(k);ans1++;}
       else i++;

    }
     for(i=n-1;i>=0;)
    {
        if(st[i]=='B')
       { i-=(k);ans2++;}
       else i--;

    }
cout<<min(ans1,ans2)<<nn;}
    return 0;
}
