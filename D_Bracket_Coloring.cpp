#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin >> n;
    string st;
    cin >> st;
    for(i=0;i<n;i++)
    {
        if(st[i]=='(')sm++;
        else sm--;
       // cout<<"i="<<i<<" sm="<<sm<<nn;
    }
   
    if (n & 1 || sm!=0)
    {
        cout << -1 << nn;
   continue;
    }
    sm=0;ll s2=0,df=0;;
   ll ara[n];
   bool f1=0,f2=0;
   for(i=0;i<n;i++)
   {
    if((st[i]=='(' && sm>=0))
    {
        f1=1;
        if(s2>0){
            df++;
        ara[i]=2;
        s2--;}
        else
        {
            ara[i]=1;
            sm++;
        }
    
    }
    else if((st[i]==')' )&&sm>0)
    {
        f1=1;
        sm--;
        ara[i]=1;
     
    }
    else
    {
        f2=1;
        df++;
        s2++;
        ara[i]=2;
    }
   // cout<<"i="<<i<<" s2="<<s2<<" "<<ara[i]<<nn;
   }
   if(df==n)
   {
    cout<<1<<nn;
    for(i=0;i<n;i++)cout<<1<<" ";cout<<nn;
   }
   else{
    if(f1&f2 && df!=n)cout<<2<<nn;
    else cout<<1<<nn;

   for(i=0;i<n;i++)cout<<ara[i]<<" ";cout<<nn;}}
    return 0;
}
