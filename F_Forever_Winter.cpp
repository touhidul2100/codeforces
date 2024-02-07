#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, m, i, j, k, sm = 0, l1, l2;
    cin >> n >> m;
    vl v[201];
    for (i = 1; i <= m; i++)
    {
        v[i].clear();
    }
    for (i = 1; i <= m; i++)
    {
        cin >> l1 >> l2;
        v[l1].pb(l2);
        v[l2].pb(l1);
    }
    for (i = 1; i <= n; i++)
    {
        ll k;
        set<ll> s;
        for (auto x : v[i])
        {
            s.insert(v[x].size());
            k = v[x].size();
        }
        if (s.size() == 1)
        {
            ll x = v[i].size();
            ll y = k - 1;
           if(x>1 && y>1)
           {
            cout<<x<<" "<<y<<nn;
            break;
           }
        }
    }}
    return 0;
}
