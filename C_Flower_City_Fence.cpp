#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    vl vv(n);
    read(vv, n);
    map<ll,ll>mp;
    ll cnt=0;
    for(i=0;i<n;i++)
    {
        if(i!=0 && vv[i-1]!=vv[i])
        mp[vv[i]]=cnt;
        cnt++;
    }
    vl v(n);v=vv;
    reverse(all(vv));
    auto it=unique(all(vv));
    vv.resize(distance(vv.begin(),it));
    vl ans;
    ll tm=n;
    ll bad=0;
  bool f=1;
  ll in=0;
    for(i=0;i<vv.size();i++)
    {
        ll t1=vv[i]-bad;
        while(t1--)
        {
            if(tm!=v[in++])
            {
                f=0;break;
            }
        }
        tm=mp[vv[i]];
        bad=vv[i];
        if(!f)break;
    }
    if(f)cout<<"YES"<<nn;
    else cout<<"NO"<<nn;}
    return 0;
}
