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
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, i, j, k, sm = 0;
    cin >> n;
    vl v(2*n + 1);
    for (i = 1; i <=2*n; i++)
        cin >> v[i];
    vl even;
    vl odd;
    for (i = 1; i <= 2*n; i++)
    {
        if (v[i] % 2 == 1)
            odd.pb(i);
        else
            even.pb(i);
    }
vector<pair<ll,ll>>p;
for(i=0;i+1<odd.size();i+=2)p.pb({odd[i],odd[i+1]});
for(i=0;i+1<even.size();i+=2)p.pb({even[i],even[i+1]});
for(i=0;i<n-1;i++)
cout<<p[i].ff<<" "<<p[i].ss<<nn;}
    return 0;
}
