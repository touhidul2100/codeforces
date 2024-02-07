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
#define shiftleft(n)(static_cast<uint64_t>(1)<<n)
#define shiftright(n,p)(static_cast<uint64_t>(n)>>p)
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
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
    string st;
cin>>st;
vl vb,vc;
bool ara[st.size()];for(i=0;i<st.size();i++)ara[i]=1;
for(i=0;i<st.size();i++)
{
    if(st[i]>='a' && st[i]<='z' && st[i]!='b')
    {
        vc.pb(i);
    }
    else if(st[i]>='A' && st[i]<='Z' && st[i]!='B')
    {
        vb.pb(i);
    }
    else if(st[i]=='b')
    {
        if(!vc.empty())
        {
            ara[vc[vc.size()-1]]=0;
            vc.pop_back();
        }
    }
     else if(st[i]=='B')
    {
        if(!vb.empty())
        {
            ara[vb[vb.size()-1]]=0;
            vb.pop_back();
        }
    }
//     cout<<"i="<<i<<nn;
//    cout<<"b:" ;show(vb);cout<<nn;
//   cout<<"c:";  show(vc);cout<<nn;
}
for(i=0;i<st.size();i++)
{
    if(st[i]=='b'||st[i]=='B')continue;
    if(ara[i])cout<<st[i];
}
cout<<nn;
   } return 0;
}
