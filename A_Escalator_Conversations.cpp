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
    ll n,m,h, i, j, k, sm = 0;
    cin>>n>>m>>k>>h;
   vl v(n);read(v,n);
   for(i=0;i<n;i++)
   {
    ll t1=abs(v[i]-h);
    bool f=0;
    for(int a=1;a<=m;a++)
    {
        for(int b=1;b<=m;b++)
        {
            if(a==b)continue;
            ll t2=abs(a-b)*k;
            if(t1==t2)
            {
                sm++;
                f=1;
                break;
            }
        }
         if(f)break;
    }
   
   }
cout<<sm<<nn;}
    return 0;
}
