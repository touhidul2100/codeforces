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
    ll n, i, j, k, sm = 0,l,r,x,a,b;
cin>>l>>r>>x>>a>>b;
ll x1=a,x2=b;b=max(x1,x2);a=min(x1,x2);
  if (a == b)
        cout<< 0<<nn;
  else  if( abs(a - b) >= x)
        cout<< 1<<nn;
        else {
   if(r-b>=x || a-l>=x)
        cout<< 2<<nn;
  else   if((r-a>=x && b-l>=x))
        cout<< 3<<nn;
   else cout<<-1<<nn;}}
}
        // if(r-b>=x || a-l>=x) cout << 2 << endl;
        // else if((r-a>=x && b-l>=x)) cout << 3 << endl;
        // else cout << -1 << endl;