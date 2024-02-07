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
    string st;
    cin>>st;n=st.size();
    vl v;
    ll cnt=0;
    bool f=0;
    for(i=0;i<n;i++)
    {
        if(st[i]=='B')
        {
            if(i>0 && cnt==0)
            {
                f=1;continue;
            }
            else if(cnt==0)continue;
            v.pb(cnt);
        cnt=0;
        }
        else cnt++;
    }
    if(cnt>0)v.pb(cnt);
    if(st[0]=='B'||st[n-1]=='B')f=1;
       sort(all(v));
    if(f)
    {
        for(i=0;i<v.size();i++)
        sm+=v[i];
        cout<<sm<<nn;
        continue;
    }
 
    else 
    {
        for(i=1;i<v.size();i++)sm+=v[i];
        cout<<sm<<nn;
        continue;
    }}
    return 0;
}
