#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
    ll n, i, j,c,k, sm = 0;
    cin>>n>>c;
    vl v(n);read(v,n);
    ll left=0,right=1e9,mid;
    ll cnt=0;
    while(left<=right)
    {
   
        mid=left+(right-left)/2;
        ll a1=mid*2;
        ll sm=0;
        for(i=0;i<n;i++)
        {
            sm+=((v[i]+a1)*(v[i]+a1));
            if(sm>c)break;
        }
        if(sm==c)
        {
            break;
        }
        else if(sm>c){
            right=mid;
        }
        else if(sm<c)
        {
            left=mid+1;
        }
    }
    cout<<mid<<nn;}
    return 0;
}
