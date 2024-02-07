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
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>k;vl v(n);read(v,n);
    ll ara[k+1];for(i=1;i<=k;i++)ara[i]=0;
    map<ll,ll>mp;
    vl ans;
    ll cnt=0;
    ll tm=0;
    for(i=0;i<n;i++)
    {
        if(mp[v[i]]>0)continue;
        ans.push_back(v[i]);
        mp[v[i]]++;
        cnt++;
        if(cnt>k){mp[ans[tm++]]--;cnt--;}
    }
    i=ans.size()-1;
    cout<<cnt<<nn;
    while(cnt--)
    {
        cout<<ans[i--]<<" ";
    }cout<<nn;
    return 0;
}
