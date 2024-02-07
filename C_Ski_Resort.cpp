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
    ll n,q, i, j, k, sm = 0;
    cin>>n>>k>>q;vl v(n);read(v,n);
    ll tm=0;
    for(i=0;i<n;i++)
    {
        if(v[i]<=q){tm++;
     //  cout<<"i="<<i<<" tm="<<tm<<nn;
        }
        else 
        {
            if(tm>=k)
            {
                tm=tm-k+1;
                sm+=((tm*(tm+1))/2);
                tm=0;
                // cout<<"i="<<i<<" sm="<<sm<<nn;

            }
            else tm=0;
        }
    }
      if(tm>=k)
            {
                 tm=tm-k+1;
                sm+=((tm*(tm+1))/2);
                tm=0;
                // cout<<"i="<<i<<" sm="<<sm<<nn;

            }
    cout<<sm<<nn;}
    return 0;
}
