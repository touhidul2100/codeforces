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
#define N 100005;
#define ok cout << "OK" << nn;
ll ans(ll n)
{
    ll ct=1;
    ll an=0;
    for(ll i=1;ct<=15;i=i<<ct)
    {
        if(n%i==0)an=ct;
        ct++;
    }
    return an;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;vl v(n);read(v,n);ll md=32768;
    vl anss;
    for(i=0;i<n;i++)
    {
       // cout<<"for v[i]="<<v[i]<<nn;
        ll tm=v[i];
        ll cnt=0;
        ll tt=15;
       for(tm;cnt<=15;tm++)
       {
       ll tm2=tm;
      // cout<<" cnt="<<cnt<<" tm="<<tm<<nn;
        a=15;
        if(tm2%md==0){tt=min(tt,cnt);break;}
        a=1;
        while(cnt+a<16)
        {
            tm2*=2;
                   if(tm2%md==0){tt=min(tt,cnt+a);break;}
                   a++;

        }
         cnt++;
       }
       anss.pb(tt);

    }
    show(anss)
    return 0;
}
