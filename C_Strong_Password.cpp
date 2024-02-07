#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
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
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
 ll Cases = 1;
 cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
    string st,st1,st2;
    cin>>st>>n>>st1>>st2;
    ll curr=-1;
    map<char,vl>mp;
    bool f=0;
    for(i=0;i<st.size();i++)mp[st[i]].pb(i);
    ll pos=-1;
    //cout<<st<<nn<<st1<<nn<<st2<<nn;
    for(i=0;i<n;i++)
    {
       // cout<<nn<<"i="<<i<<nn;
        for(char c=st1[i];c<=st2[i];c++)
        {
           // cout<<"c="<<c<<endl;
            auto it=upper_bound(all(mp[c]),curr);
           // cout<<"it="<<*it<<endl;
            if(it==mp[c].end())
            {
                f=1;break;
            }
            pos=max(pos,*it);
        // cout<<"c="<<c<<" it="<<*it<<" pos="<<pos<<" curr="<<curr<<endl;
        }
         if(f)break;
         curr=pos;
       // curr=pos;
     //  cout<<"end of i="<<i<<" curr="<<curr<<"pos="<<pos<<endl;
       
    }
    if(f)cout<<"YES"<<nn;
    else cout<<"NO"<<nn;
   } return 0;
}


