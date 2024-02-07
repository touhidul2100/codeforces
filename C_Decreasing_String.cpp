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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,pos,a,b, j, k, sm = 0;
    string st;cin>>st>>pos;
    ll len=st.size();
    pos--;
    vector<char>v;
    st+='$';
    for(auto x:st)
    {
        while(v.size()>0&&pos>=len && x<v.back())
        {
            pos-=len;len--;
            v.pop_back();
        }
        v.push_back(x);
    //    cout<<"char="<<x<<" pos="<<pos<<" len="<<len<<nn;
    //    show(v);
    }
    cout<<v[pos];}
    return 0;
}
