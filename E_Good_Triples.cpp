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
#define shiftleft(n)(static_cast<uint64_t>(1)<<n)
#define shiftright(n,p)(static_cast<uint64_t>(n)>>p)
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
ll cal[30];
void init()
{
    for(int i=0;i<30;i++)cal[i]=0;
    for(int i=0;i<=9;i++)
    for(int j=0;j<=9;j++)
    for(int k=0;k<=9;k++)
    cal[i+j+k]++;
}
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
init();
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
string st;cin>>st;
ll ans=1;
for(i=0;i<st.size();i++)
{
ans*=cal[st[i]-48];
}
cout<<ans<<endl;
   } return 0;
}
