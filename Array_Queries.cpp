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
#define N 100005
#define ok cout << "OK" << nn;
ll ara[N];
ll tree[N * 3];
void init(ll node, ll lf, ll rg)
{
    if (lf == rg)
    {
        tree[node] = ara[lf];
        return;
    }
    ll mid = lf + (rg - lf) / 2;
    init(2 * node, lf, mid);
    init(node * 2 + 1, mid + 1, rg);
    tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}
ll query(ll node, ll lf, ll rg, ll i, ll j)
{
    if (lf >= i && rg <= j)
        return tree[node];
    else if (lf > j || rg < i)
        return inf;
    // if(lf<i && rg<j){
    ll mid = lf + (rg - lf) / 2;
    ll a = query(node * 2, lf, mid, i, j);
    ll b = query(node * 2 + 1, mid + 1, rg, i, j);
    return min(a, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, q, sm = 0;
    cin >> n >> q;
    for (i = 1; i <= n; i++)
        cin >> ara[i];
    init(1, 1, n);
    cout<<"Case "<<tst<<":"<<nn;
    while(q--)
    {
        cin>>a>>b;
        ll ans=query(1,1,n,a,b);
        cout<<ans<<nn;
    }}
   // for (i = 1; i <=3*n;i++)cout<<tree[i]<<" ";cout<<nn;
        return 0;
}
