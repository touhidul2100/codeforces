#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
#define nn '\n'
#define inf LONG_MAX
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    string st1,st2;
    cin>>n>>m;
    cin>>st1>>st2;
    set<ll>st;
    size_t fnd=-1;
    while(1)
    {
         fnd=st2.find(st1,fnd+1);
         if(fnd!=string::npos)
         st.insert(fnd);
         else break;
    }
    if(st.count(0)&& st.count(m-n))cout<<0<<nn;
   else if(st.count(0))cout<<1<<nn;
    else if(st.count(m-n))cout<<2<<nn;
    else cout<<3<<nn;
    return 0;
}
