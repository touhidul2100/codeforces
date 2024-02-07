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
    ll n, i,m,a,b, j, k, sm = 0;
   cin>>n;vl v(n);read(v,n);
   ll ara[n+1];ara[0]=0;
    map<ll,ll>fre;
    for(i=0;i<n;i++)ara[i+1]=ara[i]+v[i];
    //for(i=1;i<=n;i++)cout<<ara[i]<<" ";cout<<nn;
    ll ans=0;ll mxx=0;
    for(i=n;i>0;i--)
    {
        fre[ara[i]]++;
            mxx=max(mxx,fre[ara[i]]);
            if(v[i-1]==0)
            {
                ans+=mxx;
              //  cout<<"i="<<i<<" ans="<<ans<<" mxx="<<mxx<<nn;
                mxx=0;
               fre.clear();
            }

    }
    ans+=fre[0];
    cout<<ans<<nn;
    fre.clear();}
    return 0;
}
