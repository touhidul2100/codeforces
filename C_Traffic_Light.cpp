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
    ll n, i, j, k, sm = 0;char c;
    cin>>n>>c;
    string st;
    cin>>st;st+=st;
    // cout<<st<<nn;
    ll ans=0;bool f=0;
    ll cnt=0;
    if(c=='g')
    {
        cout<<0<<nn;
        continue;
    }
    for(i=0;i<st.size()-1;i++)
    {
       if(st[i]==c && f==0)
       {
        cnt++;
         ans=max(ans,cnt);
        f=1;
       }
       else if(st[i]!='g' && f==1)
       {
        cnt++;
         ans=max(ans,cnt);
       }
       else if(st[i]=='g')
       {
        ans=max(ans,cnt);
        cnt=0;
        f=0;
       }

    }
    cout<<ans<<nn;}
    return 0;
}
