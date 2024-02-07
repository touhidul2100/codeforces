#include <bits/stdc++.h>
using namespace std;
long long int countinversion(vector<long long int>v,long long int n)
{
    long long int one=0,result=0;
    for(long long int i=0;i<n;i++)
    {
if(v[i]==1)one++;
else result+=one;
    }
    return result;
}
 int main()
{
    long long int t;
    cin>>t;
    while(t--){
    long long int n, i, j, count,count1, count2;
    cin >> n;
    vector<long long int> v, v1, v2;
    for (i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    v1 = v;
    v2 = v;
    for (i = 0; i < n; i++)
    {
        if (v1[i] == 0)
        {
            v1[i] = 1;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(v2[i]==1)
        {
            v2[i]=0;
            break;
        }
    }
   count=countinversion(v,n);
    count1=countinversion(v1,n);
     count2=countinversion(v2,n);
  long long int l=max(count,count1);
    cout << max(l, count2) << endl;
}}