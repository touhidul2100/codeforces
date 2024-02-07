#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    string st;
    cin>>st;
   string s="abc";
   bool f=0;
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        string st2=st;
        if(st==s)
        {
            f=1;break;
        }
        swap(st[i],st[j]);
        if(st==s)
        {
            f=1;break;
        }
        st=st2;
    }
   }
   if(f)cout<<"YES"<<nn;
   else 
   cout<<"NO"<<nn;}
    return 0;
}
