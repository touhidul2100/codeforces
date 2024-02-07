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
string st;
cin>>st;
ll total=1;
ll ans=0;
if(st.size()==1)ans+=(st[i]-48);
else {
    ans+=(st[st.size()-1]-48);
    ans+=((st[st.size()-2]-48)*10);
}
if(ans%4==0)total+=1;else if(ans%4==3)total+=3;else if(ans%4==2)total+=4;else total+=2;
if(ans%4==0)total+=1;else if(ans%4==3)total+=2;else if(ans%4==2)total+=4;else total+=3;
if(ans%4==0)total+=1;else if(ans%4==3)total+=4;else if(ans%4==2)total+=1;else total+=4;
cout<<total%5<<nn;
   } return 0;
}
