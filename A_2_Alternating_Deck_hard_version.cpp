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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,i, sum11 = 1, sum12 = 0, sum21 = 0, sum22 = 0;
        cin >> n;
        n -= 1;
        ll tm = 5;
        while (n > 0)
        {
            if (n >= tm)
            {
                i=1;
                while(i<=tm)
                {
                    sum22++;i++;if(i>tm)break;
                    sum21++;i++;
                }
                n-=tm;
                tm+=4;
                  //cout <<"loop 1:"<< sum11 << " " << sum12 <<" "<<sum21<<" "<<sum22<< endl;
            }
            else
            {
                   i=1;
                 while(i<=n)
                {
                    sum22++;i++;if(i>n)break;
                    sum21++;i++;
                }
               //cout <<"loop 2:"<< sum11 << " " << sum12 <<" "<<sum21<<" "<<sum22<< endl;
                break;
            }
             if (n >= tm)
            {
                i=1;
                while(i<=tm)
                {
                    sum11++;i++;if(i>tm)break;
                    sum12++;i++;
                }
                n-=tm;
                tm+=4;
                 // cout <<"loop 3:"<< sum11 << " " << sum12 <<" "<<sum21<<" "<<sum22<< endl;
            }
            else
            {
                   i=1;
                 while(i<=n)
                {
                    sum11++;i++;if(i>n)break;
                    sum12++;i++;
                }
              // cout <<"loop 4:"<< sum11 << " " << sum12 <<" "<<sum21<<" "<<sum22<< endl;
                break;
            }
                
        }
        cout << sum11 << " " << sum12 <<" "<<sum21<<" "<<sum22<< endl;
    }
    return 0;
}
