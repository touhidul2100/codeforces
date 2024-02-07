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
    ll n1, n2, i, m, a, b, j, k, sm = 0;
    cin >> n1 >> n2;
    vl v1(n1);vl v2(n2);
   for(i=0;i<n1;i++)cin>>v1[i];
    for(i=0;i<n2;i++)cin>>v2[i];
    ll x1=0,x2=0;
    for(i=0;i<n1;i++)x1^=v1[i];
    for(i=0;i<n2;i++)x2|=v2[i];
    ll mxx=x1,mnn=x1;
    if(!(n1&1)){
    ll tm=mnn&x2;
    mnn^=tm;}
    if(n1&1)
    {
        ll tm=mxx^x2;
        ll t2=tm^mxx;
        ll t3=tm&t2;
        mxx^=t3;

    }
    cout<<mnn<<" "<<mxx<<nn;}
    return 0;
}
