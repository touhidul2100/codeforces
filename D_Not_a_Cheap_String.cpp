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
#define M 10000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    string st;
    cin>>st>>n;
    map<char,ll>mp;
    for(i=0;i<st.size();i++)
    {
        mp[st[i]]++;
        sm+=int(st[i])-96;
        //cout<<"i="<<i<<" sm="<<sm<<nn;
    }
    // cout<<"sm="<<sm<<nn;
   for(i=122;i>=97;i--)
   {
    while(mp[i]>0 && sm>n)
    {
        mp[i]--;
        sm-=(i-96);
    }
    if(sm<=n)break;
   }
   for(i=0;i<st.size();i++)
   {
    if(mp[st[i]]>0)
    {
        cout<<st[i];
        mp[st[i]]--;
    }
   }
    cout<<nn;}
    return 0;
}
