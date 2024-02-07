#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define ff first
#define ss second
// const ll m = 50000;

// bool prime(ll n)
// {
//     ll i;

//     for (i = 2; i < min(n, m); i++)
//         if (n % i == 0)
//             return 0;
//     return 1;
// }
// ll pp(ll n)
// {
//     n -= 1;
//     ll c = 0;
//     while (1)
//     {
//         if (prime(n))
//         {
//            // cout<<n<<" "<<c<<endl;
//             c++;
//             n--;
//             if (c == 2)
//             {n++;
//                 break;
//             }
//         }
//         else
//           {  n--;}
//     }
//     return n;
// }
ll gcd(ll a,ll b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c, i;
        cin >> n;
        if (n % 2 == 1)
        {
           ll l1=3;
           ll l2=n-4;
           while(gcd(l1,l2)!=1)
           {
            l1++;
            l2--;
           }
           cout<<l2<<" "<<l1<<" "<<1<<endl;
        }
        else if (n % 2 == 0)
            cout << n - 3 << " " << 2 << " " << 1 << endl;
        // else if(n%2==1)
        // {
        //     i=3;
        //     while(n%i!=0)
        //     {
        //         i+=2;
        //     }
        //     cout<<(n-3*i)<<" "<<2*i<<" "<<i<<endl;
        // }}
    }
    return 0;
}
