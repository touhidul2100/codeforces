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
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
cin>>n;
map<ll,ll>mp;
while(n--)
{
cin>>a>>b;
if(a==1)
{
    mp[b]++;
    continue;
}
map<ll,ll>tm;
tm=mp;
bool possible=1;
// cout<<"b="<<b<<nn;
// cout<<"mp="<<nn;
// for(auto x:tm)cout<<x.ff<<" "<<x.ss<<nn;
for(i=0;i<30;i++)
{
    if((1<<i)&b)
    {
        //cout<<"i="<<i<<nn;
        if(tm[i]>0)
        {
            tm[i]--;
            continue;
        }
        ll tvalue=(1<<i);
       // cout<<"tvalue="<<tvalue<<nn;
        ll tans=0;
        for(j=i-1;j>=0;j--)
        {
             if(tans==tvalue)break;
            if(tm[j]==0)continue;

            if((tm[j]*(1<<j))+tans<=tvalue)
            {
                tans+=((tm[j]*(1<<j)));
                tm[j]=0;
                continue;
            }
            ll req=tvalue-tans;
            ll left=1,right=tm[j],mid;
            while(left<=right)
            {
                mid=left+(right-left)/2;
                if(((1<<j)*mid)==req)
                {
                    break;
                }
                else if(((1<<j)*mid)>req)right=mid;
                else left=mid+1;
            }
            tm[j]-=mid;
            tans+=(((1<<j)*mid));
        }

        if(tans!=tvalue)
        {
            possible=0;break;
        }

    }
}
if(possible)cout<<"YES"<<nn;
else cout<<"NO"<<nn;
// cout<<nn;
}
   } return 0;
}
