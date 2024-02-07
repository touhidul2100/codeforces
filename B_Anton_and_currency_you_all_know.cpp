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
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    string st,s;
    cin>>st;
 s=st;bool f=1;
 char pv=0;
 n=st.size();
 ll stoi=-1;
 ll smi=-1;
 ll broind=-1;
 bool f1=1;
    for(i=0;i<st.size()-1;i++)
    {
       
        if((st[i]-48)%2==0 )
        {
         if(st[i]<st[n-1] && f1)
         {
            stoi=i;f1=0;
         }
         else if(st[i]>st[n-1])broind=i;
         else if(st[i]==st[n-1])smi=i;

        }
    }
    if(stoi!=-1)
    {
        swap(st[stoi],st[n-1]);
        cout<<st<<nn;
    }
    else if(smi!=-1)
    {
        swap(st[smi],st[n-1]);
        cout<<st<<nn;
    }
      else if(broind!=-1)
    {
        swap(st[broind],st[n-1]);
        cout<<st<<nn;
    }
    else cout<<-1<<nn;
    return 0;
}
