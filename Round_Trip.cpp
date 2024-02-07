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
#define N 20005
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
    ll n, i,m, j, k, sm = 0;
       fstream file;
       ll a[N],b[N];
    file.open("job_file.txt");
    ll i1=0,i2=0;
    ll cnt=0;
    while (!file.eof())
    {
        if(cnt==0)
        {
            file>>n;
        }
        if(file.peek()=='\n')
        {
            cnt++;
        }
        if(cnt==1)file>>a[i1++];
        else if(cnt==2)file>>b[i2++];
       }
    file.close();
vector<pair<pl,ll>>v;
ll highest_day=0;
for(i=0;i<n;i++)
{
    v.pb({{a[i],i+1},b[i]});
    highest_day=max(highest_day,b[i]);
}
sort(v.begin(),v.end(),[](const pair<pl,ll> &p1,const pair<pl,ll> &p2)
{
return (p1.ff.ff==p2.ff.ff)?(p1.ss<p2.ss):(p1.ff.ff>p2.ff.ff);
});
bool block[highest_day+5];for(i=1;i<=highest_day;i++)block[i]=0;
ll ans[highest_day+5];
ll profit[highest_day+5];
for(auto x:v)
{
    ll day=x.ss;
    for(i=day;i>0;i--)
    {
        if(!block[i])
        {
            ans[i]=x.ff.ss;
            profit[i]=x.ff.ff;
            block[i]=1;
            break;
        }
    }
}
ll total=0;
for(i=1;i<=highest_day;i++)
{
    total+=profit[i];
    cout<<"Day="<<i<<" job no="<<ans[i]<<" profit="<<profit[i]<<nn;
}
cout<<"total maximum profit="<<total<<nn;
   } return 0;
}
