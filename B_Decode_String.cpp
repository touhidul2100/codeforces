#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    string st, ans;
    cin >> n >> st;
   for(i=n-1;i>=0;)
   {
    if(st[i]=='0')
    {
        i--;
        ll tm=st[i]-48;i--;
        ll t2=(st[i]-48)*10;
        tm+=(t2+96);i--;
        char c=char(tm);
        ans.insert(0,1,c);
    }
    else 
    {
         ll tm=st[i]-48+96;i--;
          char c=char(tm);
        ans.insert(0,1,c);
    }
   }
 // reverse(ans.begin(),ans.end());
  cout<<ans<<nn;}
    return 0;
}
