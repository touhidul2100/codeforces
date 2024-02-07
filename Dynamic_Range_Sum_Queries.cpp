#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
ll ara[N];
ll tree[N*3];
void init(ll node,ll left,ll right)
{
    if(left==right)
    {
        tree[node]=ara[left];
        return;
    }
    ll mid=left+(right-left)/2;
    init(node*2,left,mid);
    init(node*2+1,mid+1,right);
    tree[node]=tree[node*2]+tree[node*2+1];
}
ll query(ll node,ll lf,ll rg,ll i,ll j)
{
    if(lf>j || rg<i)
    {
        return 0;
    }
    if(lf>=i && rg<=j)
    {
        return tree[node];
    }
    ll mid=lf+(rg-lf)/2;
    return query(node*2,lf,mid,i,j)+query(node*2+1,mid+1,rg,i,j);
}
void update(ll node,ll lf,ll rg,ll in,ll val)
{
    //cout<<"left="<<lf<<" right="<<rg<<" in="<<in<<" val="<<val<<nn;
     if(lf>in || rg<in)
    {
        // ok
        // cout<<"left="<<lf<<" right="<<rg<<" in="<<in<<" val="<<val<<nn;
        return ;
    }
    if(lf==in && rg==in)
    {
       
         tree[node]=val;
         return;
    }
    ll mid=lf+(rg-lf)/2;
    update(node*2,lf,mid,in,val);update(node*2+1,mid+1,rg,in,val);
    tree[node]=tree[node*2]+tree[node*2+1];
}
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    for(i=1;i<=n;i++)cin>>ara[i];
    init(1,1,n);
    while(m--)
    {
        cin>>k>>a>>b;
        if(k==2)
        cout<<query(1,1,n,a,b)<<nn;
        else update(1,1,n,a,b);
    }
   } return 0;
}
