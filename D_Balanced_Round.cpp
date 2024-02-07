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
    ll n, i, j, k, sm = 0;
    cin>>n>>k;
    vl v(n),v1(n),v2(n);read(v,n);
   
    v1=v;v2=v;
    sort(all(v1));sort(all(v2),greater<ll>());
    //  show(v1)
    // show(v2)
    ll a1=0,b1=0,a2=0,b2=0;
    ll x1=0;
    ll ans1=n+1;
    for(i=0;i<n-1;i++)
    {
        if((v1[i+1]-v1[i])>k)
        {
            b1=i;
            a1=n-(b1+1-x1);
            ans1=min(ans1,a1);
            x1=b1+1;

        }
    }
   if(ans1==n+1)ans1=0;

   ll x2=0;
    ll ans2=n+1;
    for(i=0;i<n-1;i++)
    {
        if((v2[i]-v2[i+1])>k)
        {
            b2=i;
            a2=n-(b2+1-x2);
            ans2=min(ans2,a2);
            x2=b2+1;

        }
    }
   if(ans2==n+1)ans2=0;
     cout<<min(ans1,ans2)<<nn;}
    return 0;
}
