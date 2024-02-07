#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
   long long int n, i, j, c = 0, c1 = 0;
    vector<int> v, v1;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
     for (i = 0; i < n-1; i++)
    {
        if(v[i]==1)
        {
            v[i]+=1;
            c++;
        }
    }
     for (i = 0; i < n-1; i++)
    {
        if(v[i+1]%v[i]==0)
        {
            v[i+1]+=1;
        }
        
    }

        if (c <= 2 * n)
        {
            for (auto x : v)
                cout << x << " ";
            cout << endl;
        }
 
    }}