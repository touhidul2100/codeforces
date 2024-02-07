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
#define N 200005
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
    ll n, i,m,a,b, j, k;
cin>>n;
bool f=1;
ll ans7=n/7;
ll ans4=0;
ll tm=n%7;
if(tm%4==0)ans4=tm/4;
while(tm%4!=0)
{
    tm=tm+7;
    ans7--;
    if(tm>n || ans7<0)
    {
        f=0;break;
    }
    else if(tm%4==0)
    {
        ans4+=(tm/4);
    }
}
if(!f)cout<<-1<<nn;
else 
{
    for(i=0;i<ans4;i++)cout<<4;
    for(i=0;i<ans7;i++)cout<<7;
    cout<<nn;
}

   } return 0;
}
