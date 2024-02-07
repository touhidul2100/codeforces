#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
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
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k;
        cin >> n;
        string st;
        cin >> st;
        char post[n];
        post[n - 1] = st[n - 1];
        for (i = n - 2; i >= 0; i--)
            post[i] = max(st[i], post[i + 1]);
    vector<char>vc;vector<ll>vi;
        for (i = n - 1; i >= 0; i--)
        {
            if (st[i] >= post[i])
            {
                vc.pb(st[i]);
                 vi.pb(i);
            }
        }
        // show(vc);
       reverse(all(vi));
       string st2;st2=st;
      sort(st2.begin(),st2.end());
       for(i=0;i<vc.size();i++)
       {
        st[vi[i]]=vc[i];
       }
    if(st!=st2){cout<<-1<<nn;continue;}
    ll cnt=1;
    for(i=vc.size()-2;i>=0;i--)
    {
        if(vc[i]==vc[i+1])cnt++;
        else break;
    }
cout<<vc.size()-cnt<<nn;
      
    }
    return 0;
}
