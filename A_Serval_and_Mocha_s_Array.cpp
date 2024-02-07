#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n, i, j;
        bool flag = 0;
        // int count=0;

        cin >> n;
        vector<int> v;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {

                if (gcd(v[i], v[j]) <= 2)
                {
                    flag = 1;

                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}