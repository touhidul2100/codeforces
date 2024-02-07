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
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k;
    cin>>n;
    string st;cin>>st;
    ll f=1;
    ll cnt=0;
    ll ans=1;
    b=1e9+7;
    for(i=2;i<n;i+=2)
    {
        ll sm=st[i-1]-48+st[i-2]-48;
            if(sm==2 && st[i]=='1')cnt++;
            else if(sm<2 && st[i]=='0')cnt++;
      
            if(sm>0 && st[i]=='1')cnt++;
           else if(sm==0 && st[i]=='0')cnt++;
       
            if(sm==1 && st[i]=='1')cnt++;
            else if(sm!=1 && st[i]=='0')cnt++;
            if(cnt==0)
            {
                ans=0;
                break;
            }
            else
            {
                if(cnt==2)ans*=2;
                else if(cnt==3)ans*=3;
                ans%=b;
                cnt=0;
            }
     

    }
    cout<<ans<<nn;}
    return 0;
}
