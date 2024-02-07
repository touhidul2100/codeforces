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
#define N 1000005
#define N1 100005
#define ok cout << "OK" << nn;
vector<ll> spf[N];
vector<ll> pf[N1 * 3];
ll ara[N1];
ll gd[N1 * 3];
void pm()
{
    ll i, j;
    for (i = 2; i < N; i += 2)
        spf[i].pb(2);
    for (i = 3; i < N; i += 2)
    {
        if (spf[i].empty())
        {
            for (j = i; j < N; j += i)
                spf[j].pb(i);
        }
    }
}
vl addd(vl v1, vl v2)
{
    ll i;
    set<ll> st;
    for (i = 0; i < v2.size(); i++)
        st.insert(v2[i]);
    for (i = 0; i < v1.size(); i++)
        st.insert(v1[i]);
    vl v;
    for (auto x : st)
    {
        if (x == 1)
            continue;
        v.pb(x);
    }
    return v;
}
void init(ll node, ll left, ll right)
{
    if (left == right)
    {
        pf[node] = spf[ara[left]];
        return;
    }
    ll mid = left + (right - left) / 2;
    ll l1 = 2 * node;
    ll r1 = 2 * node + 1;
    init(l1, left, mid);
    init(r1, mid + 1, right);
    vl v = addd(pf[l1], pf[r1]);
    pf[node] = v;
}
vl query_spf(ll node, ll left, ll right, ll i, ll j)
{
    if (left >= i && right <= j)
    {
        // cout<<"left="<<left<<" node="<<node<<nn;
        return pf[node];
    }
    if (right < i || left > j)
        return {1};
    ll mid = left + (right - left) / 2;
    ll l1 = 2 * node;
    ll r1 = 2 * node + 1;
    vl v1 = query_spf(l1, left, mid, i, j);
    vl v2 = query_spf(r1, mid + 1, right, i, j);
    vl v = addd(v1, v2);
    return v;
}
void gddd(ll node, ll left, ll right)
{
  // cout<<"node="<<node<<" left="<<left<<" right="<<right<<nn;
    if (left == right)
    {
        gd[node] = ara[left];
        return ;
    }
    ll mid = left + (right - left) / 2;
    ll l1 = 2 * node;
    ll r1 = 2 * node + 1;
    gddd(l1, left, mid);
    gddd(r1, mid + 1, right);
    ll v1 =(__gcd(gd[l1], gd[r1]));
    gd[node] = v1;
}
ll query_gd(ll node, ll left, ll right, ll i, ll j)
{
    if (left >= i && right <= j)
    {
       // cout<<"left="<<left<<" right="<<right<<" node="<<node<<nn;
        return gd[node];
    }
    if (right < i || left > j)
        return 0;
    ll mid = left + (right - left) / 2;
    ll l1 = 2 * node;
    ll r1 = 2 * node + 1;
    ll v1 = query_gd(l1, left, mid, i, j);
    ll v2 = query_gd(r1, mid + 1, right, i, j);
    ll v = __gcd(v1, v2);
    return v;
}
void dpp(ll n,ll k,ll l,ll r,ll &ans)
{
    if(l>=r ||(r-l+1<=ans))return ;
    vl v=query_spf(1,1,n,l,r);
    ll gg=query_gd(1,1,n,l,r);
    ll cnt=0;
    for(ll i=0;i<v.size();i++)
    {
        if(gg%v[i]==0)continue;
        cnt++;
    }
    if(cnt==k)
    {
        ans=max(ans,(r-l+1));
            return;
    }
    if(l+1==r)return;
           dpp(n,k,l+1,r,ans);
            dpp(n,k,l,r-1,ans);
}
int main()
{
    Optimization();
    pm();
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n>>k;
        for (i = 1; i <= n; i++)
            cin >> ara[i];
        init(1, 1, n);
        gddd(1,1,n);
        ll ans=0;
        dpp(n,k,1,n,ans);
        cout<<ans<<nn;






    }

    return 0;
}
