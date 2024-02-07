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
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
bool flag(ll hr,ll mn)
{
    string hh,mm;
    hh=to_string(hr);
    mm=to_string(mn);
    if(hr<10)
    {
        hh.insert(0,"0");
    }
    if(mn<10)
    {
        mm.insert(0,"0");
    }
    // cout<<"lo="<<hh<<" "<<mm<<nn;
    hh+=mm;
   mm=hh;
   reverse(mm.begin(),mm.end());
   bool f=0;
   if(mm==hh)f=1;
   else f=0;
   return f;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    string st;
    cin>>st>>n;
    ll hr=(st[1]-48)+(st[0]-48)*10;
     ll mn=(st[4]-48)+(st[3]-48)*10;
     ll ht=hr,mt=mn;
     ll loop=1440/n;
     ll hp=n/60;
     ll mp=n%60;
     ll cnt=0;
     vector<pair<ll,ll>>vp;
     if(flag(hr,mn))cnt++;
     vp.pb({hr,mn});
    //  cout<<"cnt="<<cnt<<nn;
  
     
       // cout<<"at first="<<hr<<" "<<mn<<nn;
     
    while(1)
     {
       
        
        hr+=hp;
        mn+=mp;
      
        if(mn>=60)
        {
            hr+=(mn/60);
            mn=mn%60;
        }
        if(hr>=24)
        hr-=24;
        //  cout<<"num="<<num++<<"::"<<hr<<" "<<mn<<nn;
        if(hr==ht && mn==mt){break;}
      pair<ll,ll>p;
      p=make_pair(hr,mn);
      auto it=find(all(vp),p);
      if(it!=vp.end()){continue;}
      
        if(flag(hr,mn)){cnt++;}
        vp.pb({hr,mn});
        //  cout<<"cnt="<<cnt<<nn;
     }
     cout<<cnt<<nn;}
    return 0;
}
