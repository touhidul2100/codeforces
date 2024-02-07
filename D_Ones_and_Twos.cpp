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
#define mx(_a) *max_element(a.begin(),a.end())
#define mn(_a) *min_element(a.begin(),a.end())
#define sum(_a) std::accumulate(a.begin(),a.end(), 0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
ll ara[N];
ll tree[3 * N];
ll n;
set<ll> st;
void sm(ll low, ll high, ll node, ll i, ll j, ll &ans)
{
    if (i <= 0 || i > n || j <= 0 || j > n)
    {
        ans = 0;
        return;
    }
    if (low > j || high < i)
        return;
    else if (low >= i && high <= j)
    {
        ans += tree[node];
        return;
    }
    ll mid = (low + high) / 2;
    sm(low, mid, node * 2, i, j, ans);
    sm(mid + 1, high, node * 2 + 1, i, j, ans);
}
void init(int i, int j, ll node)
{
    // cout << i << " " << j << " " << nn;
    if (i == j)
    {
        tree[node] = ara[i];
        return;
    }
    ll mid = (i + j) / 2;
    init(i, mid, node * 2);
    init(mid + 1, j, node * 2 + 1);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}
void update(ll i, ll j, ll node, ll ind, ll num)
{
    // cout<<i<<" "<<j<<" "<<ind<<nn;
    if (i == j && i == ind)
    {
        ara[i] = num;
        tree[node] = num;
        if (num == 2 && st.count(ind))
            st.erase(ind);
        if (num == 1)
            st.insert(ind);
        return;
    }
    else if (ind > j || ind < i)
    {
        return;
    }

    ll mid = (i + j) / 2;
    update(i, mid, node * 2, ind, num);
    update(mid + 1, j, node * 2 + 1, ind, num);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        st.clear();
        // cout << "Case " << Test << ": ";
        ll i, m, a, b, j, k, c;
        cin >> n >> k;
        for (i = 1; i <= n; i++)
        {
            cin >> ara[i];
            if (ara[i] == 1)
                st.insert(i);
        }

        init(1, n, 1);

        while (k--)
        {

            cin >> a;
            if (a == 1)
            {
                cin >> b;
                  ll total=0;
                    sm(1,n,1,1,n,total);
                ll ans1 = 0, ans2 = 0, ans = 0;
                if (!st.empty())
                {
                    auto it1 = st.begin();
                    // cout << *it1 << nn;
                    auto it2 = st.end();
                    it2--;
                    // cout << *it2 << nn;
                    sm(1,n,1,*it1,n,ans1);
                    sm(1,n,1,1,*it2,ans2);
                    ans=max(ans1,ans2);
                }
                    if(b<=total and(b<=ans||(b-ans)%2==0))
                    cout<<"YES"<<nn;
                    else cout<<"NO"<<nn;
          
            }
            else if (a == 2)
            {
                cin >> b >> c;
                update(1, n, 1, b, c);
            }
        }
    }
    return 0;
}
