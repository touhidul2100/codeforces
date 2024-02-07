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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n;ll ara[n+1];for(i=1;i<=n;i++)cin>>ara[i];
    ll tm=n;
    vl v;
    for(i=1;i<=n;i++)
    {
        while(ara[i]%2==0)
        {
            ara[i]/=2;
            tm--;
            if(tm==0)break;
        }
        if(tm==0)break;
        ll cn=0;
        if(i%2==0)
        {
            ll cs=i;
            while(cs%2==0)
            {
            cs/=2;
                cn++;
            }
            v.pb(cn);
        }
    }
    if(tm==0){cout<<0<<nn;
    continue;
    }
    sort(all(v),greater<ll>());
    ll t2=accumulate(all(v),0);
    if(t2<tm){cout<<-1<<nn;}
    else
    {
 ll lgbe=0;
        for(i=0;i<v.size();i++)
        {
            tm-=v[i];
            lgbe++;
            if(tm<1)break;
        }
        cout<<lgbe<<nn;
    }}
    return 0;
}
