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
    ll test;
    cin >> test;
    while (test--)
    {
        ll i, j, k, n, cnt = 0, ans, c = 0;
        string st1, st2, f1, f2, t1, t2;
        cin >> st1 >> st2;
       ll a=st1.length();
       ll b=st2.size();

        if (st1 == st2)
        {
            cout << "YES" << endl;
            cout << st1 << endl;
             continue;
        }
         if (st1[0] == st2[0])
        {
            cout << "YES" << endl;
            cout << st1[0] << "*" << endl;
             continue;
        }
         if (st1[a-1] == st2[b - 1])
        {
            cout << "YES" << endl;
            cout << "*" << st1[a-1] << endl;
            continue;
        }
        
            bool f = 0;
            for (i = 0; i <a-1; i++)
            {
                string tm = st1.substr(i, 2);
                if (st2.find(tm) != string::npos)
                {
                    cout << "YES" << endl;
                    cout << "*" << tm << "*" << endl;
                    f = 1;
                    break;
                }
               
            }
             if (!f)
                {
                    cout << "NO" << endl;
                    continue;
                }
        
    }
    return 0;
}
