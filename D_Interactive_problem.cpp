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
// Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    // for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    // ll n, i,m,a,b, j, k, sm = 0;

int l=0,r=1000000,mid;
int cnt=0;
while(cnt<25)
{
mid=l+(r-l)/2;
cout<<mid<<nn;
fflush(stdout);
string st;
cin>>st;
if(st=="Bingo!")break;
else if(st=="Bigger")l=mid+1;
else if(st=="Smaller") r=mid;
else break;
cnt++;
if(cnt==25)break;
}

   return 0;
}
