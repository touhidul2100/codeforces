#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i,j,n,c,c1, m;
    cin >> n >> m;
    vector<int> v;
    for (i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(),greater<int>());
    c=v[0];
    for(i=0;i<=m-n;i++)
    {
            c1=v[i]-v[i+n-1];
            if(c1<c)
            {
                c=c1;
            }
    }
cout<<c<<endl;
}