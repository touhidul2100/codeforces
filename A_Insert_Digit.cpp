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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string st;
        ll n, i, j = 0;
        char c;
        cin >> n >> c >> st;
        bool f=0;
      for(i=0;i<n;i++)
      {
        if(st[i]<c && f==0)
        {
            cout<<c<<st[i];f=1;
        }
        else cout<<st[i];
      }
      if(!f)cout<<c<<nn;else cout<<nn;
}
    return 0;
}
