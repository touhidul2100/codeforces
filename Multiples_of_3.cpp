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
ll tree[N * 3][3];
ll sum[N*3];
ll cnt = 0;
void init(ll node, ll lf, ll rg)
{
    sum[node]=0;
    if (lf == rg)
    {
        tree[node][0] = 1;
        tree[node][1] = tree[node][2] = 0;
        return;
    }
    ll mid = lf + (rg - lf) / 2;
    init((node * 2), lf, mid);
    init((node * 2) + 1, mid + 1, rg);
    tree[node][0] = tree[node * 2][0] + tree[(node * 2) + 1][0];
  tree[node][1]=tree[node][2]=0;
}
void update(ll node, ll left, ll right, ll i, ll j)
{
    // if (cnt > 15)
    //     return;
    // cout << "cnt=" << cnt++<< nn;
    // cout<<"left="<<left<<" right="<<right<<nn;
    // cout<<"i="<<i<<" j="<<j<<nn<<nn;

    if (i <= left && j >= right)
    {
        //  Lazy[at*2] =   (1 + Lazy[at*2])%3;
        //     Lazy[at*2+1] = (1 + Lazy [at*2+1])%3;
        ll a = tree[node][0];
        ll b = tree[node][1];
        ll c = tree[node][2];
        tree[node][0] = c;
        tree[node][1] = a;
        tree[node][2] = b;
        if(left!=right){
        sum[node]+=1;
        sum[node]%=3;}
        return;
    }
    if (left>j || right<i)
    {
        return;
    }
    // if(left==right)
    // {
    //     // if(left>=i && left<=j)
    //     // {
    //     //        ll a = tree[node][0];
    //     // ll b = tree[node][1];
    //     // ll c = tree[node][2];
    //     // tree[node][0] = c;
    //     // tree[node][1] = a;
    //     // tree[node][2] = b;
    //     // //  sum[node]+=1;
    //     // // sum[node]%=3;
    //     // }
    //     return ;
    // }
    ll mid = left + (right - left) / 2;
    update(node * 2, left, mid, i, j);
    update(node * 2 + 1, mid + 1, right, i, j);
    tree[node][0] = tree[node * 2][0] + tree[(node * 2) + 1][0];
    tree[node][1] = tree[node * 2][1] + tree[(node * 2) + 1][1];
    tree[node][2] = tree[node * 2][2] + tree[(node * 2) + 1][2];
}
ll query(ll node, ll lf, ll rg, ll i, ll j,ll carry)
{
    // cout<<"left="<<lf<<" right="<<rg<<" carry="<<carry<<nn;
    // cout<<"i="<<i<<" j="<<j<<nn<<nn;
    if (i <= lf && j >= rg)
    {
        ll ans=tree[node][0];
        if(carry==1)ans=tree[node][2];
        else if(carry==2)ans=tree[node][1];
        return ans;
    }
    if (lf>j || rg<i)
        return 0;
    ll mid = lf + (rg - lf) / 2;
    ll a = query(node * 2, lf, mid, i, j,(sum[node]+carry)%3);
    ll b = query((node * 2) + 1, mid + 1, rg, i, j,(sum[node]+carry)%3);
    return a + b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, q, b, ind, j, k;
    cin >> n >> q;
    // for (i = 1; i <= n; i++)
    //     cin >> ara[i];
    init(1, 1, n);
    //     for(i=1;i<=3*n;i++)cout<<"node="<<i<<nn<<"zro="<<tree[i][0]<<" one="<<tree[i][1]<<" two="<<tree[i][2]<<nn;
    //    cout<<nn;
    while (q--)
    {
        cin >> ind >> i >> j;
        i++;
        j++;
        if(ind==1)
        {
            cout<<query(1,1,n,i,j,0)<<nn;
        }
        if (ind == 0)
        {
            update(1, 1, n, i, j);
            //     //cout<<"after update from "<<i<<" "<<j<<nn;
            //cout << nn;
        }
    }
    return 0;
}
