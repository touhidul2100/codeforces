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
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> k;
    string st;
    cin >> st;
    if(k%2==0)
    {
        sort(st.begin(),st.end());
        cout<<st<<nn;
        continue;
    }
    vector<char> v1, v2;
    for (i = 0; i < n; i++)
    {
        if (i & 1)
            v2.pb(st[i]);
        else
            v1.pb(st[i]);
    }
    sort(all(v1));
    sort(all(v2));
 
    vector<char> v;
    for (i = 0; i < n / 2; i++)
       { v.push_back(v1[i]);v.push_back(v2[i]);}
    if (!(n&1))
        v.pb(v2[v2.size() - 1]);
    else
        v.pb(v1[v1.size()-1]);

    for(i=0;i<n;i++)cout<<v[i];cout<<nn;}
   

    return 0;
}
