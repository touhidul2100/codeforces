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
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    string st1,st2;cin>>st1>>st2;
    auto it=st1.find(st2);
    if(it!=string::npos)
    {
        cout<<0<<nn;
        continue;
    }
    ll ans=INT_MAX;
    for(i=0;i<=n-m;i++)
    {
        ll cnt=0;
       // cout<<"i="<<i<<nn;
        ll tm=i;
        for(j=0;j<m;j++)
        {
            ll t1=st1[tm++]-48;
            ll t2=st2[j]-48;
            ll mn=30;
            if(t1>=t2)
            {
                mn=min(mn,t1-t2);
                mn=min(mn,t2+10-t1);
            }
            else if(t2>t1)
            {
                mn=min(mn,10-t2+t1);
                mn=min(mn,t2-t1);
            }

    cnt+=mn;
    // cout<<"t1="<<t1<<" t2="<<t2<<nn;
    // cout<<"j="<<j<<" cnt="<<cnt<<nn;
        }
        ans=min(ans,cnt);
       // cout<<"i="<<i<<" ans="<<ans<<nn;
    }
    cout<<ans<<nn;}
    return 0;
}
