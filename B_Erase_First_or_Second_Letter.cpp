#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
string st;
cin>>n>>st;
ll ans=(n*(n+1))/2;
map<char,ll>mp;
ll ind=n;
for(i=0;i<n-1;i++)
{
    if(i+1<n)
    {
        if(st[i]==st[i+1])
        {
            ll tm=(n-i-1);
            tm=(tm*(tm+1))/2;
            ans-=tm;
               mp[st[i]]++;
               ind=i+1;
            break;
        }
    }
     else if(i+2<n)
    {
        if(st[i]==st[i+2])
        {
            ll tm=(n-i-2);
            tm=(tm*(tm+1))/2;
            ans-=tm;
               mp[st[i]]++;
               ind=i+2;
            break;
        }
    }
    mp[st[i]]++;
}
cout<<ans<<nn;
   } return 0;
}
