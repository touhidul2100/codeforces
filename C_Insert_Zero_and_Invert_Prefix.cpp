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
    cin>>n;vl a(n);read(a,n);
    if(a[n-1]==1){cout<<"NO"<<nn;continue;}
    else 
    {
        vl b;
       i=n-1;
       ll zero=0,one=0;
       while(a[i]!=1 && i>=0)
       {
        b.pb(0);
        i--;
        zero++;
       }
       bool f=0;
        for(;i>=0;i--)
        {
            if(a[i]==1)
            {
               //cout<<"loop 1 i="<<i<<nn;
                one++;
                 if(one>0 && i==0)
                {
                    k=one;
                    one--;
                    while(one--)b.pb(0);
                    b.pb(k);
                }
                zero=0;
            }
            else if(a[i]==0)
            {
                 // cout<<"loop 0 i="<<i<<nn;
                bool f=0;
                if(one>0)
                {
                    f=1;
                    k=one;
                    one--;
                    while(one--)b.pb(0);
                    b.pb(k);
                }
                zero++;
                one=0;
                b.pb(0);
            }
        }
        if(b.size()>0)
        {cout<<"YES"<<nn;
show(b)}
else cout<<"NO"<<nn;
    }
    }
    return 0;
}
