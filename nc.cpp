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
    ll n, i,m,a,b, j,d,c, k, sm = 0;
    cin>>n>>m;
    cout<<nn;
    vector<pair<ll,ll>>vp;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        vp.pb({a,b});
    }
    vl ans;
    cout<<nn;
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c>>d;
        ll t1=min(a,c),t2=max(a,c),t3=min(b,d),t4=max(b,d);
        ll cnt=0;
        for(auto x:vp)
        {
            if(x.ff>=t1 && x.ff<=t2 && x.ss>=t3 && x.ss<=t4)cnt++;
        }
        ans.pb(cnt);
    }
    cout<<nn;
    for(i=0;i<ans.size();i++)cout<<ans[i]<<" ";cout<<nn;
    }
    return 0;
}
