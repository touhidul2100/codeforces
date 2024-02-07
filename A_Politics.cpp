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
    ll n, i, k, j, sm = 0;
    ll mm = 0;
    cin >> n >> k;
    string st[n];
    for (i = 0; i < n; i++)
    {
        cin >> st[i];
    }
    ll cnt = 0;
    vl p;
    for (i = 0; i < st[0].size(); i++)
    {
        for (j = 0; j < n; j++)
        {
            auto it = find(all(p), j);
            if (it == p.end())
            {
                if (st[0][i] == st[j][i] && i==k-1)
                {
                    cnt++;
                }
                     if (st[0][i] == st[j][i])
                {
                    continue;
                }

                else
                {
                    p.push_back(j);
                }
            }
        }
    }
    cout << cnt << nn;}
    return 0;
}
