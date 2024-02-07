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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;vl v1(n),v2(n),v(n);read(v1,n);read(v2,n);
    for(i=0;i<n;i++)
    v[i]=v2[i]-v1[i];
    sort(all(v),greater<ll>());
    bool f[n];for(i=0;i<n;i++)f[i]=0;
    i=0;j=n-1;
    ll cnt=0;
    while(i<j)
    {
        if(v[j]>=0)break;
        if(v[i]+v[j]>=0)
        {
            cnt++;
            f[i]=1;f[j]=1;i++;j--;
        }
        else j--;
    }
    ll pls=0;for(i=0;i<n;i++){if(v[i]>=0)pls++;}
    pls-=cnt;
    ll ans=(pls/2)+cnt;
    cout<<ans<<nn;}
    return 0;
}
