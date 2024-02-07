#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int n, r, d, sum;
        cin >> n;
        r = n % 2020;
        d = n / 2020;
        if (d - r >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}