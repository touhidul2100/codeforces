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
#define nn '\n'
#define inf 1e18
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
    vpl vp;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        if(i>k)vp.pb({k,i});
    }
    sort(vp.begin(),vp.end());
    ll num=vp.size();
    // cout<<"num="<<num<<nn;
    //for(auto x:vp)cout<<x.ff<<" "<<x.ss<<nn;
    for(i=0;i<num-1;i++)
    {
        ll key=vp[i].ss;
        ll left=i+1;
       ll right=num-1,mid;
       bool f=0,f1=0;
       while(left<=right)
       {
        mid=left+(right-left)/2;
        if(vp[mid].ff>key && vp[mid-1].ff<=key)
        {
            f=1;
            break;
        }
        else if(vp[mid].ff>key)right=mid;
        else left=mid+1;
        if(f1)break;
        if(left==right)f1=1;
       }
        if(f)sm+=(num-mid);
       // cout<<"i="<<i<<" mid="<<mid<<" sm="<<sm<<nn;

    }
    cout<<sm<<nn;}
    return 0;
}
