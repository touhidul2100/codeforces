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
#define M 10000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin>>n>>k;
    vl v(n);read(v,n);
    ll vv[n+5];
    vv[0]=0;
    for(i=1;i<=n;i++)vv[i]=vv[i-1]+v[i-1];
    // for(i=1;i<=n;i++)cout<<i<<"="<<vv[i]<<" "<<nn;
    if(k>vv[n]){cout<<-1<<nn;
    continue;
    }
     if(k==vv[n]){cout<<0<<nn;
    continue;
    }
    ll ans=n;
    
    for(i=1;i<=n-k+1;i++)
    {
        ll l=i+k-1,r=n;
       
        
        if((vv[r-1]-vv[i-1])<k){continue;}
        ll mid;
        ll cnn=0;
        while(1)
        {
        //     cout<<"i="<<i<<" cnt="<<cnn++<<nn;
        //    if(cnn>10)break;
             mid=(l+r)/2;
          // cout<<"cnt="<<cnn<<" l="<<l<<" r="<<r<<" mid="<<mid<<nn;
            if((vv[mid]-vv[i-1]==k) &&((vv[mid+1]-vv[i-1])>k ||mid==n))
            {
                // cout<<"FINUSHED ="<<i<<nn;
                break;
            }
           else if((vv[mid]-vv[i-1]==k) &&(vv[mid+1]-vv[i-1])==k)
            {
             
               l=mid+1;
            }
            else if((vv[mid]-vv[i-1])>k)
            {
                r=mid-1;
            }
             else if((vv[mid]-vv[i-1])<k)
            {
              l=mid+1;
            }
            // else
            // {
            //    r=mid+1;
            // }
          
        }
          ll tm=i-1+(n-(mid));
       
        //  cout<<"tm="<<tm<<nn;
            ans=min(ans,tm);
    //    if(i==2)   break;
    }
    cout<<ans<<nn;}
    return 0;
}
