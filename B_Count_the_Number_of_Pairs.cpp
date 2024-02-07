#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
    int n, k, i, tc=0;
    string st1, st;
    vector<pair<char, int>> v;
    cin >> n >> k;
    cin >> st;
    st1 = st;
transform(st1.begin(),st1.end(),st1.begin(),::toupper);
    unordered_set<char> s;
    for (auto &ch : st1)
    {
        s.insert(ch);
    }
    int c1 = 0, c2 = 0, tem;
    // for(auto &c3:s)
    // {
    //     cout<<c3<<" "<<c3+32<<endl;
    // }
    for (auto &c : s)
    {
        c1=0;c2=0;
        for (i = 0; i < st.size(); i++)
        {
            
            if (st[i] == c)
              { c1++;
              //cout<<c<<" "<<c1<<endl;
              }
            else if ( st[i] == c + 32)
               { c2++;
              // cout<<c+32<<" "<<c2<<endl;
               }
        }
      
        if (c1 >= c2)
        {
            tem = 0;
            int t2 = 0;
            tc = tc+c2;
            tem = c1 - c2;
           
            if (tem % 2 == 1)
            {
                t2 = (tem - 1) /2;
            }
            else if (tem % 2 == 0)
            {
                t2 = tem /2;
            }
            if (k >= t2)
            {
                tc = tc + t2;
                k = k - t2;
            }
            else if(t2>k)
            {
                tc=tc+k;
                k=0;
            }
        }
         if (c2 >c1)
        {
            tem = 0;
            int t2 = 0;
            tc = tc+c1;
            tem = c2 - c1;

            if (tem % 2 == 1)
            {
                t2 = (tem - 1) / 2;
            }
            else if (tem % 2 == 0)
            {
                t2 = tem / 2;
            }
            if (k >= t2)
            {
                tc = tc + t2;
                k = k - t2;
            }
            else if(t2>k)
            {
                tc=tc+k;
                k=0;
            }
        }
    }
    cout<<tc<<endl;}
}