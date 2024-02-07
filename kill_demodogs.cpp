#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll mod=1e9+7;
        ll sum=(((n%mod*(n+1)%mod)%mod)*(337%mod*(4*n-1)%mod)%mod)%mod;
        cout<<sum<<endl;
    }
}
