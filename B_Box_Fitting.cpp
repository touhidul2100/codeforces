#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
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
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> m;
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        mp[log2(k)]++;
    }
    bool f = 1;
    ll cnt = 0;
    while (f)
    {
    
            f = 0;
        ll tm = 0;
        for (i = 30; i >= 0; i--)
        {
           // cout<<"i="<<i<<nn;
            if (mp[i] > 0)
                f = 1;
            while ((mp[i] > 0) && (tm +(pow(2,i)) <= m))
            {
              //  cout<<"add="<<(pow(2,i))<<" tm=";
                tm +=(pow(2, i));
                mp[i]--;
                
            }
          //  cout<<"END"<<nn;
        }
        if (f)
        {
            cnt++;
            //cout<<"tm="<<tm<<" cnt="<<cnt<<nn;
            tm = 0;
        }
    }
    cout << cnt << nn;}
    return 0;
}
