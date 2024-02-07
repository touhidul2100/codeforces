#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
int n, i, c = 0;
    string st, st1;
    cin >> n;
    cin >> st;
    set<string>s;
    c++;
    for (i = 2; i <n; i++)
    {
       if(st[i]==st[i-2])continue;
       else c++;
    }
  
    cout << c << endl;}
}