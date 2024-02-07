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
    ll tst;
    cin>>tst;
    while(tst--){
 ll i,n,j,cnt=0;
 cin>>n;
 string st;
 cin>>st;ll ara1[n+1],ara2[n+1];
 for(i=1;i<=n;i++)
 ara1[i]=st[i-1]-48;
 for(i=n;i>0;i--)
 {
    for(j=i;j<=n;j+=i)
    {
        if(ara1[j]==0)
        ara2[j]=i;
        else break;
    }
 }
 for(i=1;i<=n;i++)
 {
    if(ara1[i]==0)
    cnt+=ara2[i];
 }

 cout<<cnt<<nn;}
    return 0;
}

