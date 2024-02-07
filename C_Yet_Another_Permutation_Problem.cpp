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
    set<ll> st;
    cin >> n;
    for (i = 1; i <= n; i++)
        st.insert(i);
    vl v;
    for (i = n; i >= 2; i--)
    {
        ll tm = i;
        if (st.count(tm))
        {
            while ((st.count(tm)))
            {
                v.pb(tm);
                st.erase(tm);
                if (tm & 1)
                    break;
                tm /= 2;
            }
        }
    }
    for(auto it=st.begin();it!=st.end();it++)
    {
        v.pb(*it);

    }
    show(v);}
    // set<ll> stt;
    // for (i = 0; i < v.size() - 1; i++)
    // {
    //     //stt.insert(__gcd((v[i], v[i + 1]));
    //      stt.insert(__gcd(v[i],v[i+1]));
    // }
    // stt.insert(__gcd(v[n-1],v[0]));
    // cout<<stt.size();
    return 0;
}
