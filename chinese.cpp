#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
ll modInv(ll a, ll m)
{
    ll x, y;
    ll gcd = egcd(a, m, x, y);
    return (x % m + m) % m;
}
int main()
{
    /*ll a1, a2, a3;
    ll y1, y2, y3;
    ll m1, m2, m3;
    ll M1, M2, M3;
    ll x, y;
    cin >> a1 >> m1 >> a2 >> m2 >> a3 >> m3;
    ll p = m1 * m2 * m3;
    M1 = p / m1;
    M2 = p / m2;
    M3 = p / m3;
    ll ans = 0;
    y = modInv(M1, m1);
    ans += a1 * M1 * y;
    cout << a1 << " " << M1 << " " << y << endl;
    y = modInv(M2, m2);
    ans += a2 * M2 * y;
    y = modInv(M3, m3);
    ans += a3 * M3 * y;
    cout << ans << " " << p << endl;*/
    ll arr[1000];
    ll brr[1000];
    for (ll i = 0; i < 3; i++)
    {
        cin >> arr[i];
        cin >> brr[i];
    }
    // for (ll i = 0; i < 3; i++)
    // {
    //     cin >> brr[i];
    // }
    ll ans = 0;
    ll fact = 1;
    for (ll i = 0; i < 3; i++)
    {
        fact *= brr[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        ll M = fact / brr[i];
        ll y = modInv(M, brr[i]);
        ans += arr[i] * M * y;
    }

    cout << ans << endl;
}
