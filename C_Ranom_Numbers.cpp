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

ll cnt(string st)
{
    ll n, i, j, k, sm = 0;
    n = st.size();
    vl v;
    for (i = 0; i < n; i++)
    {
        if (st[i] == 'A')
            v.pb(1);
        else if (st[i] == 'B')
            v.pb(10);
        else if (st[i] == 'C')
            v.pb(100);
        else if (st[i] == 'D')
            v.pb(1000);
        else if (st[i] == 'E')
            v.pb(10000);
    }
    ll tm = v[n - 1];
    for (i = n - 1; i >= 0; i--)
    {
        if (v[i] >= tm)
        {
            sm += v[i];
             tm = max(tm, v[i]);
        }
        else
        {
            sm -= v[i];
        }
      
    }
    return sm;
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
    cin >> st;
    vector<string> v;
    v.pb(st);
    n = st.size();
    ll tm1 = 65;
    while (tm1<70)
    {
        for (i = n - 1; i >= 0; i--)
        {
            
            if (st[i] == tm1)
            {
              //  cout<<"tm1="<<char(tm1)<<" i="<<i<<nn;
                ll t2 = 65;
                string stm = st;
                for (j = 0; j < 5; j++)
                {
                    stm[i] = t2;
                    t2++;
                     v.pb(stm);
                    //  cout<<stm<<nn;
                }
               
                break;
            }
        }
     
        tm1++;
    }
       tm1 = 65;
    while (tm1<70)
    {
        for (i =0; i<n; i++)
        {
            
            if (st[i] == tm1)
            {
                //cout<<"tm1="<<char(tm1)<<" i="<<i<<nn;
                ll t2 = 65;
                string stm = st;
                for (j = 0; j < 5; j++)
                {
                    stm[i] = t2;
                    t2++;
                     v.pb(stm);
                    //  cout<<stm<<nn;
                   // cout<<"stm[i]"<<char(stm[i])<<nn;
                }
               
                break;
            }
        }
       
        tm1++;
    }
    ll ans=INT_MIN;
    for(i=0;i<v.size();i++)
    {
         ans=max(ans,cnt(v[i]));
        // cout<<v[i]<<nn;
    }
    cout<<ans<<nn;}
    return 0;
}
