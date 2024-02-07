#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
   int n, m, i, j;
   vector<int> v, v1, v3;
   cin>>n>>m;
   for (i = 0; i < m; i++)
   {
      int x;
      cin >> x;
      v.push_back(x);
   }
   int c = 0;
   for (i = 0; i < m; i++)
   {
      auto it = find(v1.begin(), v1.end(), v[i]);
     
      if (it != v1.end())
      {
         c++;
         // v.push_back(c);
          v1.push_back(v[i]);
      }
      else
      {
         c++;
         v3.push_back(c);
          v1.push_back(v[i]);
          if(v3.size()==n)break;
      }
   }
   for(i=v3.size();i<n;i++)
   v3.push_back(-1);
   reverse(v3.begin(),v3.end());
   for(i=0;i<v3.size();i++)
   cout<<v3[i]<<" ";
   cout<<endl;
}}