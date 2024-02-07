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
    cin>>n>>k;vl v(n);read(v,n);
   ll key=n;
   vl vv(n);vv=v;sort(all(vv));
   for(i=0;i<n;i++)
   {
    if(i!=vv[i])
    {
        key=i;
        break;
    }
   }
   ll t1=k%(n+1);
   if(t1==0)
   {
    show(v);
    continue;
   }
   ll bd,cnt=0;
   for(i=n-1;i>=0;i--)
   {
    cnt++;
    if(cnt==t1){bd=i;break;}
   }
   for(i=bd+1;i<n;i++)cout<<v[i]<<" ";
   cout<<key<<" ";
   for(i=0;i<bd;i++)cout<<v[i]<<" ";cout<<nn;}
    return 0;
}
