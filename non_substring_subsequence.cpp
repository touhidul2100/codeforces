#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, n1, n2, i, f, c, x, y;
        string st, st1, st2;
        cin >> a >> b;
        cin >> st;
        while (b--)
        {
            cin >> x >> y;
            bool flag = 0;
            for (i = y; i < a; i++)
            {
                if (st[i] == st[y - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                for (i = x - 2; i >= 0; i--)
                {
                    if (st[i] == st[x - 1])
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
    }
}
