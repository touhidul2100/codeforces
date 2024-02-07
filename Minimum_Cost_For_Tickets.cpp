#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
ll ara[100005];
ll cost[4];
ll mem[100005];
ll trl(ll i,ll n1,ll cst)
{
    if(i==n1)return 0;
    if(mem[i]!=0)return mem[i];
    ll val1=trl(i+1,n1,cost[0]);
    ll val2=trl(i+1,n1,cost[1]);
    ll val3=trl(i+1,n1,cost[2]);
    mem[i]=min({val1,val2,val3})+cst;
    return mem[i];

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    ll n1;
    cin>>n1;
    for(i=0;i<n;i++)cin>>ara[i];
    for(i=0;i<3;i++)cin>>cost[i];
    for(i=0;i<=n1;i++)mem[i]=-1;
    ll an=trl(0,n1,cost[0]);
    return 0;
}
