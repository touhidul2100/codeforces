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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 100005;
#define ok cout << "OK" << nn;
ll md=1e9+7;
void multi(ll F[2][2], ll F2[2][2])
{
    ll a = F[0][0] * F2[0][0] + F[0][1] * F2[1][0];
    ll b = F[0][0] * F2[0][1] + F[0][1] * F2[1][1];
    ll c = F[1][0] * F2[0][0] + F[1][1] * F2[1][0];
    ll d = F[1][0] * F2[0][1] + F[1][1] * F2[1][1];
    F[0][0] = a%md;
    F[0][1] = b%md;
    F[1][0] = c%md;
    F[1][1] = d%md;
}
void ans(ll F[2][2], ll n)
{
    if (n == 0 || n == 1)
        return;
    ll F2[2][2] = {{1, 1}, {1, 0}};
    ans(F, n / 2);
    multi(F, F);
    if (n % 2 != 0)
       { multi(F, F2);}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n,a,b;
    cin >>a>>b>>n;
 ll F[2][2] = {{1, 1}, {1, 0}};
    ans(F, n);
    cout<< F[0][1]*b+F[1][1]*a<<nn;;
    }
    return 0;
}
