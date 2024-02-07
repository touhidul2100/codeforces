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
    ll t;
    cin>>t;
    while(t--){
 ll n,i,j;
 cin>>n;
 string st;
 cin>>st;
 bool f=0;
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
    if(st[i]==st[j]&&(j-i)%2==1)
    {
        cout<<"NO"<<endl;
        f=1;
        break;
    }

}
if(f)break;
}
if(!f)cout<<"YES"<<endl;}
    return 0;
}

