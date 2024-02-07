#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
#define N 3005
#define ok cout << "OK" << nn;
vl prime[N];
void primee()
{
    ll i,j;
    for(i=1;i<N;i++)prime[i].clear();
    for(i=2;i<N;i++)
    {
        if(prime[i].empty())
        {
            for(j=i;j<N;j+=i)
            {
                prime[j].pb(i);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
        primee();
    ll n, i,m,a,b,c, j, k, sm = 0;
   cin>>n;
   ll cnt=0;
   for(i=2;i<=n;i++)
   {
    if(prime[i].size()==2)cnt++;
   }
cout<<cnt<<nn;
    return 0;
}
