#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)         \
    for (auto &val : _a) \
        cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
bool isprime(ll x)
{
    bool f = 1;
    if (x == 2)
        f = 1;
    else if (x % 2 == 0)
        f = 0;
    else
    {
        for (ll i = 3; i < sqrt(x); i + 2)
        {
            if (x % i == 0)
            {
                f = 0;
                break;
            }
        }
    }
    return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  //  bool f = 0;
  ll t;
  cin>>t;
  while(t--){
    ll x, l, r, i, j, n1, n2,n3;
    cin >> x >> l >> r;
   
        // i = l;
        // if (i == 1)
    //         i=2;
    //     while (i <= r)
    //     {
    //         if (x % i == 0)
    //         {
    //             if ((isprime(x / i) == 0))
    //             {
    //                 ll tm = x / i;
    //                 j = l;
    //                 while (j <= x / i)
    //                 {
    //                     if (tm / j == 0)
    //                     {
    //                         n1 = i;
    //                         n2 = j;
    //                         n3 = tm / j;
    //                         f = 1;
    //                         break;
    //                     }
    //                 }
    //             }
    //             if(isprime(i)==0)
    //             {

    //             }
    //         }
    //          if (f == 1)
    //         break;
    //     i++;
    //     }
       
    
    // if(f)cout<<n1<<" "<<n2<<" "<<n3<<endl;
    // else
    // cout<<-1<<endl;
    bool f=0;
    
    for(i=l;i<=r;i++)
    {
       
        if(x%i==0)
        {
            ll tem=x/i;
            for(j=l;j<=sqrt(tem);j++)
            {
                if(tem%j==0&&j!=i&&j!=tem/j&&i!=tem/j&&(tem/j>=l)&&(tem/j<=r))
                {
                    n1=i;n2=j;n3=tem/j;
                    f=1;break;
                }
            }
            if(f)break;

        }
    }
    if(f)cout<<n1<<" "<<n2<<" "<<n3<<endl;
    else cout<<-1<<endl;}
    return 0;
}