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
    cin>>n;m=(n*(n-1))/2;vl v(m);read(v,m);
    ll mxx=mx(v);
    map<ll,ll>mp;
    set<ll>st;
    for(i=0;i<m;i++)
    {
        mp[v[i]]++;
        st.insert(v[i]);
    }
    vl ans;
    ll cut=n-1;
    auto it=st.begin();
 while(cut!=0)
 {
    ll x=*it;
    while(mp[x]!=0)
    {
        if(mp[x]>=cut)
        {
            ans.pb(x);
            mp[x]-=cut;cut--;
        }
    }
    it++;
    if(it==st.end())it=st.begin();

 }
 ans.pb(mxx);sort(all(ans),greater<ll>());
 for(i=0;i<ans.size();i++)cout<<ans[i]<<" ";cout<<nn;}
    return 0;
}
