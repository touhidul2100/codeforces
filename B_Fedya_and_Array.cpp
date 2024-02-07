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
    ll test;
    cin>>test;
    while(test--){
ll n,k,i,j;
cin>>n>>k;
    ll ans=(n-k)*2;
    cout<<ans<<endl;
    for(i=k;i<=n;i++)
    {
        cout<<i<<" ";
    }
    for(i=n-1;i>k;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
//     continue;
// }
// if(n>0 &&k>0)
// {
//     ll ans=(n-k)*2;
//     cout<<ans<<endl;
//     for(i=n;i>=k;i--)
//     {
//         cout<<i<<" ";
//     }
//     for(i=k+1;i<n;i++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     continue;
// }
// if(n==0&&k<0)
// {
//     cout<<(abs(k)+1)<<endl;
//   for(i=k;i<=0;i++)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   continue;
// }
// if(k==0&&n>0)
// {
//     cout<<(abs(n)+1)<<endl;
//   for(i=n;i>=0;i--)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   continue;
// }
}
    return 0;
}
