#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
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
#define nn '\n'
#define inf LONG_MAX
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    vector<string> stt = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};
    map<char, ll> mp, tm;
    string st;
    cin >> st;
    for(i=0;i<st.size();i++)mp[st[i]]++;
    ll ans = 0;
    for (i = 1; i <pow(2,15); i++)
    {
        tm = mp;
        bool f = 1;
        ll cnt = 0;
        for (j = 0; j <= 14; j++)
        {
            if ((i & (1 << j)))
            {
                // cout<<"j="<<j<<nn;
                for (k = 0; k < stt[j].size(); k++)
                {
                   
                    if (tm[stt[j][k]] > 0)
                        tm[stt[j][k]]--;
                    else if (tm[stt[j][k]] <= 0)
                      {
                     
                        f=0;break;
                      }
                }
                cnt++;
            }
            if (!f)
            {
                cnt = 0;
                break;
            }
            
        }
        if (f)
        {
            ans = max(ans, cnt);
        }
    }
    cout << ans << nn;}
    return 0;
}
