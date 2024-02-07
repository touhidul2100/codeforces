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
bool pp(ll n)
{
    bool f = 1;
    if (n != 2)
    {
        if (n % 2 == 0)
            f = 0;
        for (ll i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                f = 0;
                break;
            }
        }
        if(n==1)f=0;
    }
    return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    string st = "";
    string faka = " ";
    string s;
    ll cnt=0;
    while (cin>>s)
    {
        st += s;
        if(s.size()>0)cnt++;
        st += faka;
    }
    if(cnt>3)
    {
        cout<<0<<nn;
    }
    else{
    bool f = 0;
    vl v1, v2, v3;
    for (i = 0; i < st.size();)
    {
        if (st[i] == ' ')
        {
            i++;
            continue;
        }
        else if (st[i] >'0' && st[i] <= '9')
        {
          
            if (v1.empty())
            {
                while (st[i] >= '0' && st[i] <= '9')
                {
                    ll num = st[i] - 48;
                    v1.pb(num);
                    i++;
                }
            }
            else if (v2.empty())
            {
                while (st[i] >= '0' && st[i] <= '9')
                {
                    ll num = st[i] - 48;
                    v2.pb(num);
                    i++;
                }
            }
            else if (v3.empty())
            {
                while (st[i] >= '0' && st[i] <= '9')
                {
                    ll num = st[i] - 48;
                    v3.pb(num);
                    i++;
                }
            }
        }
       else {f=1;break;}
    }
    if ( f||v1.empty() || v2.empty() || v3.empty())
    {
        cout << 0 << nn;
    }
    else
    {
        reverse(all(v1));
        reverse(all(v2));
        reverse(all(v3));
        // show(v1);
        // show(v2);
        // show(v3);
        ll n1 = 0, tm = 1;
        for (i = 0; i < v1.size(); i++)
        {
            n1 += (v1[i] * tm);
            tm *= 10;
            // cout<<"i="<<i<<" n1="<<n1<<nn;
        }
        ll n2 = 0;
        tm = 1;
        for (i = 0; i < v2.size(); i++)
        {
            n2 += (v2[i] * tm);
            tm *= 10;
        }
        ll n3 = 0;
        tm = 1;
        for (i = 0; i < v3.size(); i++)
        {
            n3 += (v3[i] * tm);
            tm *= 10;
        }
        if (n1 % 2 == 0 && n1 > 3 &&n1<=1e9 && pp(n2) && pp(n3) && (n1 == n2 + n3))
            cout << 1 << nn;
        else
            cout << 0 << nn;
    }
    }
    return 0;
}
