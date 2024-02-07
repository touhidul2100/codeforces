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
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, j, k, sm = 0;
        cin >> n;
        string st1, st2;
        cin >> st1 >> st2;
        ll cnt1 = 0, cnt2 = 0;
        for (i = 0; i < n; i++)
        {
            if (st1[i] != st2[i])
                cnt1++;
        }
        reverse(st1.begin(), st1.end());
        for (i = 0; i < n; i++)
        {
            if (st1[i] != st2[i])
                cnt2++;
        }
        ll cnt = min(cnt1, cnt2);
        if(cnt1==0)
        {
            cout<<0<<nn;
            continue;
        }
        else  if(cnt2==0)
        {
            cout<<2<<nn;
            continue;
        }
       ll ans1=2*cnt1;
       ll ans2=2*cnt2;
       if(cnt1&1)ans1--;
       if(cnt2%2==0)ans2--;
       cout<<min(ans1,ans2)<<nn;
    }
    return 0;
}
