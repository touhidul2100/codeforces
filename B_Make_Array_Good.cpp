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
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;vl v(n);read(v,n);
    vl v1(n);v1=v;
    ll mnn=mn(v);
    vector<pair<ll,ll>>vp;
     vector<pair<ll,ll>>v2;
    for(i=0;i<n;i++)
    {
        if((v[i]%mnn)!=0)
        {
            ll tp=mnn-(v[i]%mnn);
           vp.pb({i+1,tp});
           v[i]+=tp;
        }
        v2.pb({v[i],i+1});
    }
    // show(v);
    sort(all(v2));
    for(i=0;i<n-1;i++)
    {
        //  cout<<"index="<<i<<nn;
        //  cout<<"mod="<<v2[i+1].ff%(v2[i].ff)<<nn;
        if((v2[i+1].ff)%(v2[i].ff)!=0)
        {
            // cout<<"index="<<i<<nn;
            // cout<<"false ="<<v2[i+1].ff<<nn;
            ll ts=v2[i].ff-((v2[i+1].ff)%(v2[i].ff));
            // cout<<"so="<<v2[i+1].ss<<" "<<ts<<nn;
            vp.pb({v2[i+1].ss,ts});
            v[v2[i+1].ss-1]+=ts;
            v2[i+1].ff+=ts;
            // show(v)
        }
    }
    // show(v);
    // cout<<"ans="<<nn;
    // cout<<vp.size()<<nn;
    // for(auto it:vp)
    // cout<<it.ff<<" "<<it.ss<<nn;
 
    // cout<<nn<<nn;
    // show(v)
    vector<pair<ll,ll>>vf;
    for(i=0;i<n;i++)
    {
        if(v1[i]!=v[i])
        {
            vf.pb({i+1,v[i]-v1[i]});
        }
    }
    cout<<vf.size()<<nn;
       for(auto it:vf)
    cout<<it.ff<<" "<<it.ss<<nn;}
    return 0;
}
