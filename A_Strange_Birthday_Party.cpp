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
#define inf 1e18
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
 
    vl v1(n);for(i=0;i<n;i++)cin>>v1[i];
    vl v2(m+1);for(i=1;i<=m;i++)cin>>v2[i];
   
    sort(all(v1));
    ll bad=0;
    ll ans=0;
    bool f=0;
    //cout<<"v[i]="<<v2[0]<<nn;
    for(i=0;i<n;i++)
    {
       // cout<<"top i="<<i<<nn;
        ll tm=v1[i];
      //  cout<<"bad="<<bad<<" tm="<<tm<<nn;
            for(j=bad+1;j<=tm;j++)
            {
                    
                ans+=v2[j];
               
                n--;
                //cout<<"j="<<j<<" ans="<<ans<<nn;
                if(i>=n){f=1;break;}
                
            }
            bad=tm;
            if(!f)
            ans+=v2[tm];
           // cout<<"ans="<<ans<<nn<<nn;
           
    }
    cout<<ans<<nn;}
    return 0;
}
