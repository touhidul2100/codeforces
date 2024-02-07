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
#define INF INT_MIN;
ll mem[2005][2005];
ll val[10005];
ll wi[100005];
ll knap(ll i,ll w,ll n)
{
    //cout<<"III=="<<i<<nn;
      if(w<0)return INF;
    if(i==n)
    {
        return 0;
        // return INF;
    }
    if(mem[i][w]!=-1)return mem[i][w];
  //  cout<<"i="<<i<<" "<<vp[i].ff<<" "<<vp[i].ss<<nn;
        ll val1=knap(i+1,w,n);
        ll val2=knap(i+1,w-wi[i],n);
        mem[i][w]=max(val1,val2+val[i]);
       // cout<<"i="<<i<<" w="<<w<<" ="<<mem[i][w]<<nn;
        return mem[i][w];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k,w, sm = 0;
    cin>>w>>n;
    for(i=0;i<n;i++)
    {
        cin>>j>>k;
        val[i]=k;
        wi[i]=j;
    }
    for(i=0;i<=n;i++)for(j=0;j<=w;j++) mem[i][j]=-1;
    ll ans=knap(0,w,n);
    cout<<mem[0][w]<<nn;
    return 0;
}
