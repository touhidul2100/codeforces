#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n,i;
    cin>>n;
    string st;
    cin>>st;


    map<char,ll>mp;
    for(i=1;i<n;i++)
    {
        mp[st[i]]++;
    }
     bool f=0;ll tm;string st1;char c;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
       if(it->ss>0)
       {
        if(it->ff<=st[0])
        {
            c=it->ff;f=1;break;
        }
       }
    }
   
if(f)
{
 reverse(st.begin(),st.end());
    size_t fnd=st.find(c);
     reverse(st.begin(),st.end());
    ll in=st.size()-1-fnd;
    cout<<c;
for(i=0;i<n;i++)
{
    if(i!=in)cout<<st[i];
}
cout<<endl;
}
else cout<<st<<endl;}
    return 0;
}