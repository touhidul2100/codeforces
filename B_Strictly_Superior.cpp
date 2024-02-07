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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    ll p[105],c[105],f[105][105];
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>p[i]>>c[i];
        for(j=1;j<=c[i];j++)
        {
            cin>>f[i][j];
        }
    }
    bool fl=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(p[i]<p[j])continue;
            if(c[i]>c[j])continue;
            ll a=1,b=1,cnt=0;
            while(a<=c[i]&& b<=c[j])
            {
               
                if(f[i][a]==f[j][b])
                {
                    cnt++;
                    a++;b++;
                }
                else 
                b++;
            }
            if(cnt!=c[i])continue;
            if(c[i]>=c[j]&&p[i]<=p[j])continue;
            cout<<"Yes"<<nn;
            fl=1;
            break;
            
        }
        if(fl)break;
    }
    if(!fl)
    cout<<"No"<<nn;
    return 0;
}
