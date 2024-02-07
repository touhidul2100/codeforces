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
    cin>>a>>b>>k;
    cout<<"Case #"<<tst<<": ";
    if(a>k && b>k)
    {
        cout<<0<<nn;
        //continue;
    }
   else if(b<=a)
    {
        ll tm=k/b;
        cout<<(tm*2-1)<<nn;
    }
   else if(a<=b/2)
   {
    ll t1=k/a;
    cout<<t1<<nn;
   }
   else
   {
    ll t1=k-a;
    ll t2=t1/b;
    t2*=2;
    t1=t1%b;
    t2+=(t1/a);
    t2+=1;
    cout<<t2<<nn;

   }}
    return 0;
}
