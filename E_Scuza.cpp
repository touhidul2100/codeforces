// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vl vector<ll>
// #define ff first
// #define ss second
// #define pb push_back
// #define read(_a, _n)              \
//     for (auto i = 0; i < _n; i++) \
//         cin >> _a[i];
// #define show(_a)            \
//     for (auto &val : _a)    \
//     {                       \
//         cout << val << " "; \
//     }                       \
//     cout << endl;
// #define all(_a) _a.begin(), _a.end()
// #define mx(_a) *max_element(all(_a))
// #define mn(_a) *min_element(all(_a))
// #define nn '\n'
// #define ok cout << "OK" << nn;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll test,tst;
//     cin>>test;
//     for(tst=1;tst<=test;tst++){
//     ll n, i, j, k, sm = 0;
//     cin >> n >> k;
//     vl v1(n), v2(k);
//     read(v1, n);
//     read(v2, k);
//     vector<pair<ll, ll>> vp;
//     ll mxx = 0;
//     sm = 0;
//     for (i = 0; i < n; i++)
//     {
//         sm += v1[i];
//         mxx = max(v1[i], mxx);
//         vp.pb({mxx, sm});
//     }
// vl v;
// // for(auto x:vp)std::cout<<x.ff<<" "<<x.ss<<nn;
//     for (i = 0; i < k; i++)
//     {
//         ll ans=0;
//         ll l=0,r=vp.size()-1,mid;
//         while (l <= r)
//         {
//             mid = (l + r) / 2;
//             if (vp[mid].ff >v2[i]&&(vp[mid-1].ff<=v2[i] ||mid==0))
//             {
//                 if(mid!=0)
//                 ans=vp[mid-1].ss;
//                 if(mid==0)ans=0;
//                 break;
//             }
//             if(vp[mid].ff<=v2[i] && mid==vp.size()-1)
//             {
//                 ans=vp[mid].ss;break;
//             }
//             else if(vp[mid].ff<=v2[i])
//             {
//                 l=mid+1;
//             }
//             else 
//             {
//                 r=mid-1;
//             }
//         }
//         //std::cout<<"i="<<v2[i]<<" mid="<<mid<<" ans="<<ans<<nn;
// v.pb(ans);ans=0;
//     }
//    for(auto x:v)std::cout<<x<<" ";std::cout<<nn;}
//     return 0;
// }
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
vl prf,mxx,ara(k);
prf.pb(0);
for(i=0;i<n;i++)
{
    cin>>j;
    prf.pb(prf.back()+j);
    if(i==0){mxx.pb(j);}
    else {
        mxx.pb(max(mxx.back(),j));
     
    }
}
read(ara,k);
// for(auto x:prf)cout<<x<<" ";cout<<nn;
// for(auto x:mxx)cout<<x<<" ";cout<<nn;
for(auto x:ara)
{
    ll ind=upper_bound(all(mxx),x)-mxx.begin();
    cout<<prf[ind]<<" ";
}
cout<<nn;}
    return 0;
}
