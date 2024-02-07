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
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    if(n==0)
    {
        cout<<0<<" "<<0<<" "<<0<<nn;
        continue;
    }
      else if(n==1)
    {
        cout<<0<<" "<<0<<" "<<1<<nn;
        continue;
    }
        if(n==2)
    {
        cout<<0<<" "<<1<<" "<<1<<nn;
        continue;
    }
ll ara[100005];
ara[0]=0;ara[1]=1;ara[2]=1;
ll tm=0;
for(i=3;i<100005;i++)
{
    tm=ara[i-1]+ara[i-2];
    if(tm==n)
    {
        cout<<ara[i-1]<<" "<<ara[i-3]<<" "<<ara[i-4]<<nn;
        break;
    }
    ara[i]=tm;
}
   } return 0;
}
