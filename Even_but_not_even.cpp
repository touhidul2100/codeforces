#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, i, c1 = 0, c2= 0;
    cin >> n;
    string st;
    cin >> st;
    for (char c : st)
    {
        if ((c - '0') & 1)
            c1++;
        if (c1 > 1)
            break;
    }
    if (c1 < 2)
        cout << -1 << endl;
    else
    {
        for (char c : st)
        {
            if ((c - '0') & 1)
            {
                cout << c;
                c2++;
            }
            if (c2 > 1)
                break;
        }
        cout << endl;
    }

    
}}