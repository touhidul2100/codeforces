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
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;
    vl a(n),b(n),as(n),bs(n);
    read(a,n);read(b,n);
    as=a;bs=b;
    sort(all(as));sort(all(bs));
    i=0;j=1;
    ll cnt=0,an=0;
    bool f=0;
    vector<pair<ll,ll>>vp;
 for(i=0;i<n;i++){
        if(a[i]!=as[i])
        {
            j=find(a.begin()+i,a.end(),as[i])-a.begin();
            if(b[i]<b[j])
            {
                break;
            }
            else 
            {
                vp.pb({i+1,j+1});
                swap(a[i],a[j]);
                swap(b[i],b[j]);
              
            }
        }
 }
  for(i=0;i<n;i++){
        if(b[i]!=bs[i])
        {
            j=find(b.begin()+i,b.end(),bs[i])-b.begin();
            if(a[i]<a[j])
            {
                break;
            }
            else 
            {
                vp.pb({i+1,j+1});
                swap(a[i],a[j]);
                swap(b[i],b[j]);
              
            }
        }
 }
 if(as==a &&bs==b){f=1;}
    if(!f)cout<<-1<<nn;
    else 
    {
        cout<<vp.size()<<nn;
        for(auto x:vp)
        cout<<x.ff<<" "<<x.ss<<nn;
    }}
    return 0;
}
