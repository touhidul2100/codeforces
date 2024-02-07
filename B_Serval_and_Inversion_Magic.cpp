#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
    int n, i, j = 0, i1, i2,a;
    cin >> n;
    string st;
    cin>>st;
    bool flag=0;
    vector<int> v, v1, v2;
    for (i = 0; i < n; i++)
    {
      
        v.push_back(st[i]);
    }
   
    if (n % 2 == 1){
     a = n / 2;
    
        for (i = 0; i < a; i++)
        {
            v1.push_back(v[i]);
            
        }
        // for(auto x:v1)
        // cout<<x<<" ";
        // cout<<endl;
        for (i = n-1; i>a; i--)
        {
           v2.push_back(v[i]);
        }
        //  for(auto x:v2)
        // cout<<x<<" ";
        // cout<<endl;
         flag = 0;
        for (i = 0; i < a; i++)
        {
            if (v1[i] != v2[i])
            {
                flag = 1;
                i1 = i;
                v2[i] = v1[i];
            }
            else if (v1[i] == v2[i] && flag == 1)
            {
                i2 = i - 1;
                break;
            }
        }}
        else if(n%2==0){
    a=n/2;

        for (i = 0; i < a; i++)
        {
            v1.push_back(v[i]);
            
        }
        // for(auto x:v1)
        // cout<<x<<" ";
        // cout<<endl;
        for (i = n-1; i>=a; i--)
        {
           v2.push_back(v[i]);
        }
        //  for(auto x:v2)
        // cout<<x<<" ";
        // cout<<endl;
          flag = 0;
        for (i = 0; i < a; i++)
        {
            if (v1[i] != v2[i])
            {
                flag = 1;
                i1 = i;
                v2[i] = v1[i];
            }
            else if (v1[i] == v2[i] && flag == 1)
            {
                i2 = i - 1;
                break;
            }
        }
        }
    if(v1==v2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;}
}