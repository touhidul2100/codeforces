#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define vl vector<ll>
// #define ff first
// #define ss second
// #define read(_a, _n)              \
//     for (auto i = 0; i < _n; i++) \
//         cin >> _a[i];
// #define show(_a)         \
//     for (auto &val : _a) \
//         cout << val << " ";
// #define all(_a) _a.begin(), _a.end()
// #define mx(_a) *max_element(all(_a))
// #define mn(_a) *min_element(all(_a))
// #define nn '\n'
// string st;
// ll n;
bool prime[100];
void prime1()
{
    for (int i = 2; i < 100; i++) {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime[i] = false;
            }
        }
    }
 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        prime1();
    int test;
    cin>>test;
    while(test--){
    
    ll i,n, j, k, tem;
    string st;
    cin >> n;
    cin >> st;
    bool flag = 0, f2 = 0;
    for (i = 0; i < st.size(); i++)
    {
        tem = st[i] - 48;
        if ((tem % 2 == 0 && tem != 2) || tem == 9||tem==1)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << 1 << endl
             << tem << endl;
    else
    {
        for (i = 0; i <n; i++)
        {
            for (j = i + 1; j <n; j++)
            {
                k = (((st[i] - 48) * 10) + (st[j] - 48));
                if (prime[k]==0)
                {
                  
                    f2 = 1;
                    break;
                }
            }
            if(f2)break;
        }
        if (f2)
            cout << 2 << endl << k << endl;
    }}
    return 0;
}
