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
bool cnt(vl v, ll n)
{
    ll ct = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
            ct++;
        if (ct > 1)
            break;
    }
    bool f;
    if (ct == 1)
        f = 0;
    else
        f = 1;
    return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, i, j, k, sm = 0;
    cin >> n;
    vl v(n);
    read(v, n);
    sort(all(v));

    bool f = 0;
    for (i = 0; i < n; i++)
    {
       
            ll tm = v[i];
        if (tm > n)
        {
            while (tm > n)
                tm /= 2;
            //    cout << "1st:" << tm << nn;
            while (1)
            {

                auto it = find(all(v), tm);
                if (it != v.end())
                {

                    tm /= 2;
                }
                else
                    break;
                // cout << "loop:" << i << nn;
                if (tm == 0)
                {
                    // cout << "break=" << tm << nn;

                    f = 1;
                    break;
                }
            }
        }
        else
        {
            // cout<<"loop 2"<<nn;
            bool op = cnt(v, tm);
            // cout<<op<<nn;
            if (op)
            {

                while (1)
                {

                    auto it = find(all(v), tm);
                    if (it != v.end())
                    {

                        tm /= 2;
                    }
                    else
                        break;
                    // cout << "loop:" << i << nn;
                    if (tm == 0)
                    {
                        // cout << "break=" << tm << nn;

                        f = 1;
                        break;
                    }
                }
            }
        }
        if (f)
            break;
        v[i] = tm;
    }
    if (f)
        cout << "NO" << nn;
    else
        cout << "YES" << nn;}
    return 0;
}
