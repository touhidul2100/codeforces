#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll j = 0, x = 1;
        while (k--)
        {
          //  cout << "k=" << k << " j=" << j << " x=" << x << endl;
            while (j < n && a[j] <= x + j)
            {
                //cout<<"2nd j="<<j<<" aj="<<a[j]<<" x+j="<<x+j<<endl;
                j++;
            }
           // cout<<"j="<<j<<endl;
            x += j;
           // cout<<"after x="<<x<<endl;
        }

        cout << x << "\n";
    
}}