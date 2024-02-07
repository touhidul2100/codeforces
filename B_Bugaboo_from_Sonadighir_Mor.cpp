#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 ll n,k,i,j;
 cin>>n>>k;
 vl v(n),v1;
 read(v,n);
 sort(v.begin(),v.end());
 show(v);
 cout<<endl;
 for(i=0;i<n-1;i++)
 {
    v1.push_back(v[i]+v[i+1]-v[i]);
 }
 v1.push_back(v[n-1]);
 show(v1);
    return 0;
}

