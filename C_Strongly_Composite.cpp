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
    cin>>n;
    vl v(n);read(v,n);
    map<ll,ll>mp;
    for(j=0;j<n;j++)
    {
        ll tm=v[j];
        for(i=2;i<=sqrt(tm);i++)
        {
            while(tm%i==0)
            {
                mp[i]++;
                tm/=i;
            }
        }
        if(tm!=1)mp[tm]++;
    }
    ll hte=0;
    ll ans=0;
    for(auto x:mp)
    {
       // cout<<x.ff<<" "<<x.ss<<nn;
        ll tm=x.ss;
        // cout<<tm<<nn;
        ans+=(tm/2);
        if(tm&1)hte++;
        if(hte==3)
        {
            ans++;
            hte=0;
        }
    }
    cout<<ans<<nn;}
    return 0;
}
