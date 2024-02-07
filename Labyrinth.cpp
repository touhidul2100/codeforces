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
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
#define inf 1e18
bool vis[1005][1005];
// bool pos(ll i,ll j,ll n,ll m,vector<string>v)
// {
//     bool f=1;
//     if(i<0||i>=n||j<0||j>=m || v[i][j]=='#')f=0;
//     return f;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    vector<string>v(n);read(v,n);
    ll dist[n+1][m+1];
    pair<ll,ll>par[n+1][m+1];
    ll r1,c1,r2,c2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            vis[i][j]=0;
            if(v[i][j]=='A')
            {
                par[i][j]={i,j};
                //dist[i][j]=0;
                r1=i,c1=j;
            }
            else if(v[i][j]=='B')
            {
                r2=i;c2=j;
               // dist[i][j]=inf;
            }
           // else dist[i][j]=inf;
        }
    }
    ll A[4]={1,-1,0,0};
    ll B[4]={0,0,1,-1};
   queue<pair<ll,ll>>qq;
    qq.push({r1,c1});
    vis[r1][c1]=1;
    while(!qq.empty())
    {
       
        ll r=qq.front().ff;
        ll c=qq.front().ss;
        qq.pop();
        for(ll tm=0;tm<4;tm++)
        {
            if((r+A[tm]<0||r+A[tm]>=n||c+B[tm]<0||c+B[tm]>=m || v[r+A[tm]][c+B[tm]]=='#') || (vis[r+A[tm]][c+B[tm]]))continue;
            {
                // if(dist[r][c]+1<dist[r+A[tm]][c+B[tm]])
                // {
                    
                   // dist[r+A[tm]][c+B[tm]]=dist[r][c]+1;
                    qq.push({r+A[tm],c+B[tm]});
                    par[r+A[tm]][c+B[tm]]={r,c};
                    vis[r+A[tm]][c+B[tm]]=1;
               // }
            }
        }
    }
    if(!vis[r2][c2])
    {
        cout<<"NO"<<nn;
    }
  // cout<< par[r2][c2].ff<<" "<<par[r2][c2].ss<<nn;
    else
    {
        vector<char>vv;
        ll pi=r2,pj=c2;
        i=r2;j=c2;
        while(v[i][j]!='A')
        {
           i=par[pi][pj].ff;
           j=par[pi][pj].ss;
           if(i<pi)vv.pb('D');
           else if(i>pi)vv.pb('U');
           else if(j<pj)vv.pb('R');
           else if(j>pj)vv.pb('L');
           pi=i;pj=j;
        }
        reverse(all(vv));
        cout<<"YES"<<nn<<vv.size()<<nn;
        for(auto x:vv)cout<<x;cout<<nn;
    }

    return 0;
}
