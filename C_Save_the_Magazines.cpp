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
#define nn '\n'
#define ok cout << "OK" << nn;
// #define M 10000007
// ll count(vl v,ll l,ll r,ll tc)
// {
//    priority_queue<ll>vf;
//     for(ll i=l;i<=r;i++)
//     {
//         vf.push(v[i]);
//     }
//     ll sm=0;
//    while(tc)
//    {
//     sm+=vf.top();
//     vf.pop();
//     --tc;
//    }
//     return sm;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, j, k, sm = 0;
        string st;
        cin >> n >> st;
        vl v(n);
        read(v, n);
        ll tm;
        for(i=0;i<n;i++)
        {
            if(st[i]=='1')sm+=v[i];
            else{tm=i; break;}
        }
    for(i=tm;i<n-1;i++)
    {
        if(st[i]=='0'&& st[i+1]=='1')
        {
            ll mn=INT_MAX;
            sm+=v[i];
           // cout<<i<<" "<<sm<<nn;
            mn=min(v[i],mn);
            while(st[i+1]=='1')
            {
                sm+=v[i+1];
                // cout<<i<<" "<<sm<<nn;
                mn=min(mn,v[i+1]);
                i++;
            }
            sm-=mn;
                 // cout<<i<<" "<<sm<<nn;
        }
    }
    cout<<sm<<nn;}
    return 0;
}
