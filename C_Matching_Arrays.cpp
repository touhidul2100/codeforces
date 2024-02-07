    #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
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
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, b, j, k;
        cin >> n >> k;
        vl  v2(n);
       vector<pair<ll,ll>>v1;
       vl a(n);read(a,n);read(v2, n);
       for(i=0;i<n;i++)
       {
       
        v1.pb({a[i],i});
       }
        
        sort(v1.rbegin(),v1.rend());
        sort(all(v2));
       ll ans[n];
       ll tm=k-1;
       for(i=0;i<k;i++)
       {
        ans[v1[i].ss]=v2[tm];
        tm--;
       }
       tm=k;
       for(i=n-1;i>=k;i--)
       {
        ans[v1[i].ss]=v2[tm];tm++;
       }
   ll cnt=0;
   for(i=0;i<n;i++)
   {
    if(a[i]>ans[i])cnt++;
   }
   if(cnt==k)
   {
    cout<<"YES"<<nn;
    for(i=0;i<n;i++)cout<<ans[i]<<" ";cout<<nn;continue;
   }
   cout<<"NO"<<nn;
}return 0;
}
