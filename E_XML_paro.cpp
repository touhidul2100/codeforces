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
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    string st;
    cin >> st;
    n = st.size();
    vector<char> s;
    for (i = 0; i < n;i++)
    {
        if(st[i]=='<'||st[i]=='>'){continue;}
      else  if (st[i] >='a' && st[i] <='z')
        {
            for(j=1;j<=(2*s.size());j++)cout<<" ";
            cout<<"<"<<st[i]<<">"<<nn;
            s.push_back(st[i]);
           
        }
        else if(st[i]=='/')
        {
            i++;
            auto it=find(all(s),st[i]);
                 s.erase(it);
             for(j=1;j<=(2*s.size());j++)cout<<" ";
            cout<<"</"<<st[i]<<">"<<nn;
       
        }

    }
    return 0;
}
