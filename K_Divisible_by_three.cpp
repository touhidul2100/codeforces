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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    string st;
    cin>>n>>st;
    map<ll,ll>mp;
    ll pre[n+5];
    pre[0]=0;
    for(i=0;i<=n;i++)
    {
        pre[i+1]=pre[i]+st[i]-48;
    }
    ll ara[n+1];for(i=1;i<=n;i++)ara[i]=st[i-1]-48;
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        ll tm=ara[i]%3;
        // if(tm==0 )
        // {
        //     ans=ans+1;
        // }
        if(pre[i]%3==0)ans+=mp[0];
        else if( pre[i]%3==2)ans+=mp[2];
        else if(pre[i]%3==1) ans+=mp[1];
        if(pre[i]%3==0)ans++;
     //cout<<"mp0="<<mp[0]<<" mp1="<<mp[1]<<" mp2="<<mp[2]<<nn;
        mp[pre[i]%3]++;
       //cout<<"i="<<i<<" pre="<<pre[i]%3<<" ans="<<ans<<nn<<nn;;
    }
  cout<<ans<<nn;}
    return 0;
}
