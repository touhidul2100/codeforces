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
ll a[200005];
ll b[200005];
bool cmp(int x,int y){
    return a[x] < a[y];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
   cin>>n>>k;
     for(int i = 1; i <= n; i ++){
        cin >> a[i];
        b[i] = i;
    }    
    
    sort(b+1,b+1+n,cmp);
cout<<"for a:"<<nn;
for(i=1;i<=n;i++)cout<<a[i]<<" ";cout<<nn;
cout<<"for b:"<<nn;
for(i=1;i<=n;i++)cout<<b[i]<<" ";cout<<nn;
    return 0;
}
