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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b,c,d, j, k, sm = 0;
    ll ara[105][105];
    for(i=0;i<105;i++)for(j=0;j<105;j++)ara[i][j]=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        for(i=a;i<b;i++)
        {
            for(j=c;j<d;j++)ara[i][j]=1;
        }
    }
    ll ans=0;
    for(i=0;i<105;i++)
    {
        for(j=0;j<105;j++)
        {
            if(ara[i][j])ans++;
        }
    }
    cout<<ans<<nn;
    return 0;
}
