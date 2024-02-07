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
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>k;
    ll mn=inf;
    ll od=0,ev=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a&1)od++;else ev++;
        ll tm=a%k;
        if(tm==0)mn=0;
        mn=min(mn,k-tm);
    }
    if(k!=4 || mn==0)
    cout<<mn<<nn;
    else 
    {
        ll tm=4;
        if(ev>=2)tm=0;
        else if(ev==1 && od>0)tm=1;
        else tm=2;
        cout<<min(mn,tm)<<nn;
    }
   } return 0;
}
