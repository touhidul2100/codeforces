#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
       long long int n, i, sum = 0;
        vector<int> v;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        priority_queue<int> pq;
        for (i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                pq.push(v[i]);
            }
            else if (v[i] == 0)
            {
                if(pq.empty())
                    continue;
                    else{
                sum +=pq.top();
                pq.pop();}
            }
        }
        cout << sum << endl;
        
    }
    return 0;}

