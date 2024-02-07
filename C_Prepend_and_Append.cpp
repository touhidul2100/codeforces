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
ll i,j,n,sub=0;
cin>>n;
string st;
cin>>st;
i=0;j=n-1;
while(i<j)
{
    if(st[i]=='0'&&st[j]=='1')
    {
        sub+=2;
        i++;j--;
    }
   else if(st[i]=='1'&&st[j]=='0')
    {
        sub+=2;
        i++;j--;
    }
    else break;

    
}
cout<<n-sub<<endl;}
    return 0;
}

