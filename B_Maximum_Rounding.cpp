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
    cin>>st;
    vl ans;
    ll hte=0;
    ll mn=-1;
    for(i=st.size()-1;i>=0;i--)
    {
    //  cout<<"i="<<i<<" mn="<<mn<<nn;
    if((st[i]-48+hte)>4)
    {
       
        ans.pb(0);
        hte=1;
        ll tm=ans.size()-1;
        mn=max(mn,tm);
    }
    else 
    {ans.pb(st[i]-48+hte);hte=0;}
    }
    if(hte==1)ans.pb(1);
    ll an[ans.size()];
    //cout<<"mn="<<mn<<nn;
    for(i=0;i<ans.size();i++)
    {
        if(i<=mn)an[i]=0;
        else an[i]=ans[i];
    }
  for(i=ans.size()-1;i>=0;i--)cout<<an[i];cout<<nn;}
    return 0;
}
