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
#define N 100005
ll spf[100005];

// set<ll> st;
vl ara;
void sieve()
{
    for (ll i = 1; i < N; i++)
        spf[i] = i;
    for (ll i = 2; i < N; i += 2)
        spf[i] = 2;
    for (ll i = 3; i < N; i += 2)
    {
        if (spf[i] == i)
        {
            for (ll j = i * i; j < N; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}
void prime()
{
    for (ll i = 2; i < N; i++)
    {
        if (spf[i] == i)
            ara.pb(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    prime();
    // cout << ara.size() << nn;

    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {

        // mp.clear();
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n;
        vl v(n);
        read(v, n);
        map<ll, ll> mp;
        mp.clear();
        bool f = 0;
        for (i = 0; i < n; i++)
        {
            // cout << "v[i]=" << v[i] << nn;
            ll tm = v[i];
            for (j = 0; ara[j] * ara[j] <= tm; j++)
            {
                if (tm % ara[j] == 0)
                {
                    // cout << "INN 1:" << ara[j] << nn;
                    mp[ara[j]]++;

                    while (tm % ara[j] == 0)
                    {
                        // cout << "tm=" << tm << nn;
                        tm /= ara[j];
                    }
                }
            }
            if (tm != 1)
            {
                // cout << "INN 1:" << ara[j] << nn;
                mp[tm]++;
            }
        }
        for (auto x : mp)
        {
            if (x.ss > 1)
            {
                // cout<<"ans="<<x.ff<<nn;
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES" << nn;
        else
            cout << "NO" << nn;
    }

    return 0;
}
