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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, i, j, sm = 0;
    cin >> n;
    vl v5(n);
    for (i = 1; i <= n; i++)
        v5[i - 1] = i;
      
    ll t1 =2, t2 = n - 3;
    vl v;
    if(n==1){cout<<1<<nn;
    continue;}
    if(n%2==1)
    {
        cout<<-1<<nn;
        continue;
    }
cout<<n<<" "<<n-1<<" ";
for(i=1;i<=(n/2)-1;i++)
{
    cout<<t1<<" "<<t2<<" ";
    t1+=2;
    t2-=2;
}
cout<<nn;


  }
    return 0;
}
