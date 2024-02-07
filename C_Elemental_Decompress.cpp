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
    {                       \
        cout << val << " "; \
    }                       \
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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, j, k, sm = 0;
    cin >> n;
    ll ara[n + 1], a[n + 1], b[n + 1];
    multiset<ll> a1, b1;
    map<ll, ll> mp;
    bool impos = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> ara[i];
        mp[ara[i]]++;
        a1.insert(i);
        b1.insert(i);
        if ((mp[1] > 1) ||(mp[ara[i]] > 2))
           { impos = 1;}
        a[i] = 0;
        b[i] = 0;
    }
    if (impos)
    {
        cout << "NO" << nn;
       continue;
    }
    for (i = 1; i <= n; i++)
    {
        if (a1.count(ara[i]))
        {
            a[i] = ara[i];
            a1.erase(a[i]);
        }
        else if (b1.count(ara[i]))
        {
            b[i] = ara[i];
            b1.erase(ara[i]);
        }
        else
        {
            impos = 1;
            break;
        }
    }
    if (impos)
    {
        cout << "NO" << nn;
        continue;
    }
    // for (i = 1; i <= n; i++)
    //     cout << a[i] << " ";
    // cout << nn;
    // for (i = 1; i <= n; i++)
    //     cout << b[i] << " ";
    // cout << nn;
    // cout << nn;
    // for (auto it = a1.begin(); it != a1.end(); it++)
    //     cout << *it << " ";
    // cout << nn;
    // for (auto it = b1.begin(); it != b1.end(); it++)
    //     cout << *it << " ";
    // cout << nn;
    for (i = 1; i <= n; i++)
    {
        if (a[i] == 0 && b[i] == 0)
        {
        
            auto it1 = a1.end();
            it1--;
            a[i] = *it1;
            a1.erase(it1);
            auto it2 = b1.end();
            it2--;
            b[i] = *it2;
            b1.erase(it2);
        }
        else if (a[i] == 0)
        {
            // if (a1.empty())
            // {
            //     //cout<<"a ok"<<nn;
            //     impos = 1;
            //     break;
            // }
            auto it1 = a1.upper_bound(b[i]);
                 if (it1==a1.begin())
            {     
                //<<"b ok"<<nn;

                impos = 1;
                break;
            }
            it1--;
            a[i] = *it1;
            a1.erase(it1);
        }
        else if (b[i] == 0)
        {
            // if (b1.empty())
            // {     
            //     //<<"b ok"<<nn;

            //     impos = 1;
            //     break;
            // }
            auto it1 = b1.upper_bound(a[i]);
                if (it1==b1.begin())
            {     
                //<<"b ok"<<nn;

                impos = 1;
                break;
            }
            it1--;
            b[i] = *it1;
            b1.erase(it1);
        }
    }
    if (impos)
        cout << "NO" << nn;
    else
    {
        cout<<"YES"<<nn;
        for (i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << nn;
        for (i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << nn;
    }}
    return 0;
}
