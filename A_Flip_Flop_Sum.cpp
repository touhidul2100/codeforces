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
    ll i,n,j,s1=0,s2=0,sum=0;
    cin>>n;
    vl v(n);read(v,n);
    for(i=0;i<n-1;i++)
    {
        sum+=v[i];
        if(v[i]==-1)s1=1;
        if(v[i]==-1&&v[i+1]==-1){s2=1;}
    }
    if(v[n-1]==-1)s1=1;
    sum+=v[n-1];
    if(s2==1)
    {
        cout<<sum+4<<endl;
    }
    else if(s2==0 && s1==1)
    {
        cout<<sum<<endl;
    }
    else cout<<sum-4<<endl;}
    return 0;
}

