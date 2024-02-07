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
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
    cin>>n;vl v(n);read(v,n);
    ll pre[n+5],post[n+5];
    pre[0]=0;pre[1]=0;pre[2]=1;
    for(i=3;i<=n;i++)
    {
      
        if(abs(v[i-1]-v[i-2])<abs(v[i-2]-v[i-3]))
        {
            pre[i]=1;
        }
        else 
        pre[i]=abs(v[i-1]-v[i-2]);
    }
    for(i=1;i<=n;i++)pre[i]+=pre[i-1];
    post[n]=0;post[n-1]=1;
    for(i=n-2;i>=1;i--)
    {
          if(abs(v[i-1]-v[i])<abs(v[i]-v[i+1]))
        {
            post[i]=1;
        }
        else 
        post[i]=abs(v[i-1]-v[i]);
    }
     for(i=n-1;i>=0;i--)post[i]+=post[i+1];
     cin>>k;
     while(k--)
     {
        cin>>a>>b;
        if(a<b)
        cout<<pre[b]-pre[a]<<nn;
        else cout<<post[b]-post[a]<<nn;
        // if(a>b)swap(a,b);
        // cout<<min(pre[b]-pre[a],post[a]-post[b])<<nn;
     }
   } return 0;
}
