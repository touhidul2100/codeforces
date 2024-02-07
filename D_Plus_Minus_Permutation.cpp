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
    cin>>n>>a>>b;
 
    ll t1=n/a,t2=n/b;
    ll t3=__gcd(a,b);
    t3=(a*b)/t3;
    t3=n/t3;
    t1-=t3;t2-=t3;
    ll a1=(n*(n+1))/2;
    ll a2=(n-t1);
    ll a3=(a2*(a2+1))/2;
    ll s1=a1-a3;
    ll s2=(t2*(t2+1))/2;
    cout<<s1-s2<<nn;}
    return 0;
}
