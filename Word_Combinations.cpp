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
#define N 2000005
#define ok cout << "OK" << nn;
ll tree[N][26];
bool stop[N];
ll cnt=0;
ll dp[100005];
string txt;
ll md=1e9+7;
void init(string st)
{
    ll node=0;
    for(ll i=0;i<st.size();i++)
    {
        if(tree[node][st[i]-'a']==0)
        {
            tree[node][st[i]-'a']=++cnt;
        }
        node=tree[node][st[i]-'a'];
    }
   // cout<<"node="<<node<<nn;
    stop[node]=1;
}
ll src(ll j)
{
    ll i=j;
    ll n=txt.size();
    ll node=0,ans=0;
    for(i=j;i<n;i++)
    {
        if(tree[node][txt[i]-'a']==0)
        {
            // return ans;
            break;
        }
        node=tree[node][txt[i]-'a'];
        if(stop[node])
        {
            
            ans+=dp[i+1];
            ans%=md;
        }
        
    }
    return ans;
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
    cin>>txt;
    for(i=0;i<N;i++)for(j=0;j<26;j++)tree[i][j]=0;
    cin>>n;
    while(n--)
    {
        string st;
        cin>>st;
        init(st);
    }
    memset(dp,0,sizeof(dp));
    dp[txt.size()]=1;
    for(i=txt.size()-1;i>=0;i--)
    {
        dp[i]=src(i);
        //cout<<"i="<<i<<" dp="<<dp[i]<<endl;
    }
    cout<<dp[0]<<nn;
   } return 0;
}
