// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vl vector<ll>
// #define ff first
// #define Optimization()       \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0);             \
//     cerr.tie(0)
// #define ss second
// #define pb push_back
// #define pl pair<ll, ll>
// #define vpl vector<pl>
// #define fileread(x) freopen(x, "r", stdin)
// #define filewrite(x) freopen(x, "w", stdout)
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
// #define sum(_a) accumulate(all(_a), 0);
// #define pi = 2 * acos(0.0);
// #define nn '\n'
// #define inf 1e18
// #define N 2000005
// #define ok cout << "OK" << nn;
// ll n;
// ll dp[105];
// ll ara[105];
// ll dpp(ll i, ll pv)
// {
//     if (i < 0)
//         return 0;
//     if (dp[i] != -1)
//         return dp[i];
//     ll ans =0;
//     if (ara[i] == 0)
//         ans = max(ans, dpp(i - 1, 0));
//     else if (ara[i] == 1)
//     {
//         if (pv == 1)
//             ans = max(ans, dpp(i - 1, 1));
//         else
//         {
//             ans = max(ans, 1 + dpp(i - 1, 1));
//             ans=max(ans,dpp(i-1,0));
//         }
//     }
//        else if (ara[i] == 2)
//     {
//         if (pv == 2)
//             ans = max(ans, dpp(i - 1, 2));
//         else
//         {
//             ans = max(ans, 1 + dpp(i - 1, 2));
//             ans=max(ans,dpp(i-1,0));
//         }
//     }
//     else if(ara[i]==3)
// {
//     if(pv==0)
//     {
//         ans=dpp
//     }
//     else if(pv==1)
//     {
//         ans++;
//         pv=2;continue;
//     }
//     else if(pv==2)
//     {
//         ans++;pv=1;continue;
//     }
//     else if(pv==3)
//     {
//         ans++;pv=3;continue;
//     }
// }
// }
// int main()
// {
//     Optimization();
//     // fileread("input.txt");
//     // filewrite("output.txt");
//     ll Cases = 1;
//     // cin >> Cases;
//     for (ll Test = 1; Test <= Cases; Test++)
//     {
//         // cout << "Case " << Test << ": ";
//         ll n, i, m, a, b, j, k, sm = 0;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
cin>>n;vl v(n);read(v,n);
ll pv=0;
ll ans=0;
if(v[0]!=0){
    ans++;
  pv=v[0];
}
for(i=1;i<n;i++)
{
if(v[i]==0)
{
    pv=0;continue;
}
else if(v[i]==1)
{
    if(pv==1){pv=0;continue;}
    else if(pv==3||pv==2||pv==0){ans++;pv=1;continue;}

}
else if(v[i]==2)
{
    if(pv==2){pv=0;continue;}
    else if(pv==3||pv==1||pv==0){ans++;pv=2;continue;}

}
else if(v[i]==3)
{
    if(pv==0)
    {
        ans++;pv=3;continue;
    }
    else if(pv==1)
    {
        ans++;
        pv=2;continue;
    }
    else if(pv==2)
    {
        ans++;pv=1;continue;
    }
    else if(pv==3)
    {
        ans++;pv=3;continue;
    }
}


}
cout<<n-ans<<nn;
   } return 0;
}
