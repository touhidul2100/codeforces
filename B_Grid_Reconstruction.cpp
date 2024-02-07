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
    ll test;
    cin>>test;
    while(test--){
    ll n, i, j, k, m;
    cin >> n;
    ll ara[3][n + 1];
    for (i = 1; i < 2; i++)
    {
        k = n * 2;
        m = 2;
        for (j = 1; j <= n; j++)
        {
            if (j & 1)
            {
                ara[i][j] = k;
                k -= 2;
            }
            else 
            {
                ara[i][j]=m;m+=2;
            }
        }
    }
  for (i = 2; i < 3; i++)
    {
        k = n * 2-3;
        m = 1;
        for (j = 1; j <= n; j++)
        {
            if (j & 1)
            {
                ara[i][j] = m;
                m+= 2;
            }
            else 
            {
               
               
                ara[i][j]=k;k-=2;
            }
        }}
   ara[2][n]=2*n-1;
    for(i=1;i<3;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<nn;
    }}
    return 0;
}
