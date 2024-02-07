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
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b,d, j, k;
    cin >> n>>m>>d;
    ll ara[n + 1];
    for (i = 1; i <= n; i++)
        cin >> ara[i];
    ll ans = 0, sm = 0;
    priority_queue<ll, vl, greater<ll>> qq;
    for (i = 1; i <= n; i++)
    {
        if (ara[i] > 0)
        {
            sm += ara[i];
            qq.push(ara[i]);
        }
        if(qq.size()>m)
        {
            sm-=qq.top();
            qq.pop();
        }
        ans=max(ans,sm-i*d);
    }

    cout<<ans<<nn;}
    return 0;
}
