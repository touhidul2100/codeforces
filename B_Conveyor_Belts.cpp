#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " "; cout << endl;}
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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0,x1,y1,x2,y2,x,y;
cin>>n>>x1>>y1>>x2>>y2;
x=min(x1,n-x1+1);
y=min(y1,n-y1+1);
ll l1=min(x,y);
x=min(x2,n-x2+1);
y=min(y2,n-y2+1);
ll l2=min(x,y);
cout<<abs(l1-l2)<<nn;}
    return 0;
}

