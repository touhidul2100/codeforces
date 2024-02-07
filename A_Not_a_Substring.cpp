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
#define sum(_a) accumulate(all(_a), 0);
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
        ll n, i, m, j, k, sm = 0;
        string st;
        cin >> st;
        n = st.size();
        if (n == 2 && st[0] == '(' && st[1] == ')')
        {
            cout << "NO" << nn;
            continue;
        }
        cout<<"YES"<<nn;
    string a="",b="";
    string c="()";
    for(i=0;i<n;i++)a+=c;
    c="(";
     for(i=0;i<n;i++)b+=c;
       c=")";
     for(i=0;i<n;i++)b+=c;
     if(a.find(st)!=string::npos)cout<<b<<nn;
     else cout<<a<<nn;}
    return 0;
}
