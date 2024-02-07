#include <bits/stdc++.h>
using namespace std;
// #define ll long long
// #define vl vector<ll>
// #define ff first
// #define ss second
// #define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
// #define show(_a) for (auto &val : _a) cout << val << " ";
// #define all(_a) _a.begin(), _a.end()
// #define mx(_a) *max_element(all(_a))
// #define mn(_a) *min_element(all(_a))
// #define nn '\n'
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int i, j, k;
    string st1, st2, st3, st4, st5;
    cin >> st1 >> st2;
    int l1=st1.size(),l2=st2.size();
   int lcm=(l1*l2)/gcd(l1,l2);
string s1,s2;
   for(i=1;i<=lcm/l1;i++)
   {
    s1+=st1;
   }
   for(i=1;i<=lcm/l2;i++)
   {
    s2+=st2;
   }

   if(s1==s2)cout<<s1<<endl;
   else cout<<-1<<endl;}
    return 0;
}
