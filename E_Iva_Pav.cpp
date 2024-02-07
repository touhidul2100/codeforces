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
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    ll ara[n + 1];
    for (i = 1; i <= n; i++)
        cin >> ara[i];
    ll pre[35][n + 5];
    ll cnt = 0;
    for (i = 1; i <= (1 << 30); i *= 2)
    {
        cnt++;
        pre[cnt][0] = 0;
        for (j = 1; j <= n; j++)
        {
            if (i & ara[j])
                pre[cnt][j] = pre[cnt][j - 1] + 1;
            else
                pre[cnt][j] = pre[cnt][j - 1];
        }
    }
    //  for(i=1;i<=5;i++)
    // {

    //     for(j=1;j<=n;j++)
    //     {
    //      cout<<pre[i][j]<<" ";
    //     }
    //     cout<<nn;
    // }
    cin >> k;
    while (k--)
    {
        cin >> a >> b;
        vpl v;
        for (i = 1; i <= 30; i++)
        {
            ll left = a, right = n,mid;
            bool f=0,f1=0;;
            while(left<=right)
            {
              
                mid=left+(right-left)/2;
                if(((pre[i][mid]-pre[i][a-1])==(mid-(a-1)))&&(mid==n||(pre[i][mid]==pre[i][mid+1])||(left==right)))
                {
                   
                    v.pb({mid,i});
                    break;
                }
                else if((pre[i][mid]-pre[i][a-1])==(mid-(a-1)))left=mid+1;
                else right=mid;
                if(f1)break;
                if(left==right)f1=1;
            }
        }
        ll ans=n+1;
        ll tm=0;
        sort(v.rbegin(),v.rend());
        for(auto x:v)
        {
           // cout<<x.ff<<" "<<x.ss<<nn;
            tm+=(1<<(x.ss-1));
            ans=min(ans,x.ff);
            if(tm>=b)break;
        }
        if(tm>=b)cout<<ans<<" ";
        else cout<<-1<<" ";
    }
    
    }
cout<<nn;
    return 0;
}
