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
    cin>>n>>a>>b;
    if(a>b+1|| n<a)
    {
        cout<<-1<<nn;
      continue;
    }
    ll cnt=0;
    ll high=0;
    for(i=0;i<a;i++)
    {
        
        if(i==a)continue;
        cnt++;
        sm+=i;
        if(i==b)break;
        if(cnt==n)break;
    }
    if(a==b)high=a-1;
    else
    high=max(b,a-1);
 //  cout<<"sm="<<sm<<" hig="<<high<<nn;
    while(cnt<n)
    {
        sm+=high;
        cnt++;
    }
   cout<<sm<<nn;}
    return 0;
}
