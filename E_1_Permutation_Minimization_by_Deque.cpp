#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";cout<<endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
ll n,i,j,sum=0,k;
 cin>>n;
 vl v(n);read(v,n);
 deque<ll>dq;
 dq.push_front(v[0]);
 ll t1=v[0],t2=v[1];
 for(i=1;i<n;i++)
 {
    if(v[i]<=t1)
    dq.push_front(v[i]);
    else 
    dq.push_back(v[i]);
    t1=dq[0];
 }
 for(i=0;i<n;i++)
 cout<<dq[i]<<" ";
 cout<<nn;}
    return 0;
}

