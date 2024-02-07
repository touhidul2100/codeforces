#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, k;
    cin >> test;
    for (k = 1; k <= test; k++)
    {
        ll n, i, j, k, sm = 0;
        cin >> n >> k;
        if (n == 2 && k == 0)
        {
            cout << "YES" << nn;
            cout << 1 << " " << -1 << nn;
          continue;
        }
        if (n > 2 && k == 0)
        {
            cout << "NO" << nn;
         continue;
        }
        ll v[110];
        ll ct = 2;
        v[1]=0;
        v[0]=0;
        for (i = 2; i <= 101; i++)
        {
            v[ct++]= (i * (i - 1)) / 2;
        }
        bool f=0;
    for(i=0;i<=n;i++)
    {
        if(v[i]+v[n-i]==k)
        {
            f=1;
            cout<<"YES"<<nn;
            for(j=1;j<=i;j++)
            cout<<-1<<" ";
            for(j=1;j<=n-i;j++)
            cout<<1<<" ";
            cout<<nn;
            break;
        }
    }
    if(!f)cout<<"NO"<<nn;}
    return 0;
}
