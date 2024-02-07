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
    ll n,i,j,m,a,b, k;
    cin>>n;vl v1,v2;
    vpl vp;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        vp.pb({a,b});
   
    }
    sort(all(vp));
ll ans=0;
for(i=0;i<n;i++)
{
    ll l1=i,r1=i;
    ll left=i+1,right=n-1,mid;
    bool f=0;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(vp[mid].ss<vp[i].ss && (mid==n-1||vp[mid+1].ss>vp[i].ss))
        {
            r1=mid;
            break;
        }
        else if(vp[mid].ss>vp[i].ss)right=mid;
        else left=mid+1;
        if(f)break;
        if(left==right)f=1;
    }
    ans+=(r1-l1);
}
    cout<<ans<<nn;
   } return 0;
}
