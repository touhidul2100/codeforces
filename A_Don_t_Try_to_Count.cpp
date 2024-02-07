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
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> m;
        string st1, st2;
        cin >> st1 >> st2;
        ll cnt = 0;
        bool f = 0;
       // cout<<st1<<" "<<st2<<nn;
        while (cnt<10)
        {
            
           auto  it = st1.find(st2);
            if (it != string::npos)
                break;
            cnt++;
            st1 += st1;
           if(st1.size()>300){f=1;break;}
        //cout<<cnt<<nn;
          
        }
        if (f)
            cout << -1 << nn;
        else
            cout << cnt << nn;
    }
    return 0;
}
