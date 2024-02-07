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
    ll n, i,m,d,a,b, j, k, sm = 0;
    cin>>n>>m>>d;ll ara[m+5];
    for(i=1;i<=m;i++)cin>>ara[i];
    ara[0]=1-d;ara[m+1]=n+1;
    ll tm=0;
    for(i=0;i<=m;i++)
    {
        tm+=((ara[i+1]-ara[i]-1)/d);
    }
    ll min=n+1;
    ll cnt=0;
    for(i=1;i<=m;i++)
    {
        ll ans=tm;
        ans-=((ara[i]-ara[i-1]-1)/d);
        ans-=((ara[i+1]-ara[i]-1)/d);
        ans+=((ara[i+1]-ara[i-1]-1)/d);
        ans+=(m-1);
        if(ans<min)
        {
            min=ans;
            cnt=1;
        }
        else if(ans==min)cnt++;
    }
    cout<<min<<" "<<cnt<<nn;}
    return 0;
}
