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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    if(n>=m)n%=m;
    ll ans=0;
    set<ll>st;
    bool f=1;
    ll cnt=0;
    while(1)
    {
        cnt++;
         ans+=n;
        n*=2;
       
        n%=m;
        if(st.count(n)){f=1;break;}
        if(n==0){f=0;break;}
        st.insert(n);
        if(cnt>100)break;
    }
    if(f)cout<<-1<<nn;
    else cout<<ans<<nn;
}
    return 0;
}
