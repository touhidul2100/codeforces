#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)         \
    for (auto &val : _a) \
        cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
     ll n, x, p, i, j, sum1 = 0, sum2 = 0, tem;
        cin >> n >> x >> p;
        bool f=0;
    for(i=1;i<=min(p,2*n);i++)
    {
    //  cout<<sum(i)<<" "<<(sum(i))%n<<" "<<(n-x)%n<<endl;
        if((sum(i))%n==(n-x)%n)
        {
           // cout<<"ASI"<<endl;
            cout<<"Yes"<<endl;
            f=1;break;
        }
    }
      if(!f)cout<<"No"<<endl;}
    return 0;
}
