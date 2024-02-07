#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        string st;
        cin >> st;
        n = st.size();
        map<char, ll> mp;
        for (i = 0; i < n; i++)
            mp[st[i]]++;
        vector<char> v;
        for (char ii = 'a'; ii <= 'z'; ii++)
        {
            if(mp[ii]>0){
            if (mp[ii] % 2 == 1)
                v.pb(ii);}
        }
        ll left = 0, right = v.size() - 1;
        char mid;
        if(v.size()>1){
        while (left < right)
        {
            mp[v[left]]++;
            mp[v[right]]--;
            left++;
            right--;
        
        }}
        bool f=0;
        if (v.size() > 0 && left==right)
        {
            if (left == right)
            {
                mid = v[left];
                mp[mid]--;
                f=1;
            }
        }
        for (char ii = 'a'; ii <= 'z'; ii++)
        {
            if (mp[ii]> 0){
               
            ll jbe = mp[ii] / 2;
            for (i = 0; i < jbe; i++)
                cout << ii;}
            // cout<<ii<<" "<<mp[ii]<<nn;
        }
        if (f)
            cout << mid;
        for (char ii = 'z'; ii >= 'a'; ii--)
        {
            if (mp[ii]>0){
            ll jbe = mp[ii] / 2;
            for (i = 0; i < jbe; i++)
                cout << ii;}
        }
        cout << nn;
    }
    return 0;
}
