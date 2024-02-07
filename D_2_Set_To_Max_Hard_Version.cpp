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
ll v1[N];
ll v2[N];
ll tree[N * 3];
ll tree2[N * 3];
ll lazy[N * 3];
ll n;
void init(ll node, ll i, ll j)
{

    if (i == j)
    {
        tree[node] = v1[i];
        lazy[node] = 0;
        return;
    }
    ll mid = i + (j - i) / 2;
    init(node * 2, i, mid);
    init(node * 2 + 1, mid + 1, j);
    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
    lazy[node] = 0;
}
void init2(ll node, ll i, ll j)
{
    if (i == j)
    {
        tree2[node] = v2[i];
        return;
    }
    ll mid = i + (j - i) / 2;
    init2(node * 2, i, mid);
    init2(node * 2 + 1, mid + 1, j);
    tree2[node] = min(tree2[node * 2], tree2[node * 2 + 1]);
}
void update(ll node, ll i, ll j, ll i1, ll j1, ll num)
{
    if (i > j1 || j < i1)
        return;
    if (i >= i1 && j <= j1)
    {
        lazy[node] = max(tree[node], num);
        tree[node] = max(tree[node], num);
        return;
    }
    ll mid = i + (j - i) / 2;
    init(node * 2, i, mid);
    init(node * 2 + 1, mid + 1, j);
    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}
ll findd(ll node, ll i, ll j, ll i1, ll j1,ll num)
{
     if (i > j1 || j < i1)
        return 0;
    if (i >= i1 && j <= j1)
    {
        return max(tree[node],num);
    }
    ll mid = i + (j - i) / 2;
    ll a1=findd(node * 2, i, mid,i1,j1,max(lazy[node],num));
    ll a2=findd(node * 2 + 1, mid + 1, j,i1,j1,max(lazy[node],num));
    return max(a1,a2);
}
ll find2(ll node, ll i, ll j, ll i1, ll j1)
{
     if (i > j1 || j < i1)
        return 1e6;
    if (i >= i1 && j <= j1)
    {
        return tree2[node];
    }
    ll mid = i + (j - i) / 2;
    ll a1=find2(node * 2, i, mid,i1,j1);
    ll a2=find2(node * 2 + 1, mid + 1, j,i1,j1);
    return min(a1,a2);
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
        // cout << "Case " << Test << ": ";
        ll i, m, a, b, j, k;
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> v1[i];
        for (i = 1; i <= n; i++)
            cin >> v2[i];
            init(1,1,n);
            init2(1,1,n);
       // priority_queue<pl, vpl, greater<>> qq;
        vector<pl>qq;
        for (i = 1; i <= n; i++)
            qq.push_back({v2[i], i});
            // sort(all(qq));
        bool yy =1;
        ll tii=0;
        while (tii<n)
        {
            ll num=qq[tii].ff;
            ll index=qq[tii].ss;
            tii++;
            ll vv1=findd(1,1,n,index,index,lazy[1]);
            if(vv1==v2[index])continue;
            else if(vv1>v2[index]){yy=0;break;}
            bool possible=0;
            ll paisa=0,f2=0;
            ll left=0,right=index-1,mid;
            ll xi=index,xj=index,number=v2[index];
            while(left<=right)
            {
                mid=left+(right-left)/2;
               ll tm=findd(1,1,n,mid,index,lazy[1]);
               ll vm=find2(1,1,n,mid,index);
               if(tm==v2[index] && vm>=tm)
               {
                xi=mid;xj=index;
                paisa=1;
                break;
               }
               else if (tm<v2[index])right=mid;
               else left=mid+1;
               if(f2)break;
               if(left==right)f2=1;
            }
            if(!paisa)
            {
            f2=0;
            left=index+1,right=n,mid;
            while(left<=right)
            {
                mid=left+(right-left)/2;
               ll tm=findd(1,1,n,index,mid,lazy[1]);
               ll vm=find2(1,1,n,index,mid);
               if(tm==v2[index] && vm>=tm)
               {
                // update(1,1,n,index,mid,tm);
                xi=index;xj=mid;
                number=tm;
                paisa=1;
                break;
               }
               else if (tm<v2[index])left=mid+1;
               else right=mid;
               if(f2)break;
               if(left==right)f2=1;
            }

            }
            if(!paisa)
            {
                yy=0;break;
            }
            update(1,1,n,xi,xj,number);
        }
        if(yy)cout<<"YES"<<nn;
        else cout<<"NO"<<nn;
    }
    return 0;
}
