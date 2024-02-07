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
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, i, j=0, k, sm = 1;
    ll Md=1e9+7;
cin>>n;
vl a(n),b(n);read(a,n);read(b,n);
sort(all(a),greater<ll>());
sort(all(b),greater<ll>());
show(a);show(b);
for(i=0;i<n;i++)
{
    while(j<n &&a[i]<=b[j]){
        cout<<"lp="<<a[i]<<" "<<b[j]<<nn;
        j++;}
    cout<<i<<" "<<j<<" ";
    cout<<(sm*(i-j+1))<<nn;
    sm=(sm*(i-j+1))%Md;
    cout<<i<<" "<<sm<<nn;
}
cout<<sm<<nn;}
    return 0;
}
