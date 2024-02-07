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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    string st;
    cin>>st;
    bool f=0;
    for(i=0;i<st.size();i++)
    {
        if(st[i]=='0')
        {
            f=0;
            continue;
        }
       else   if(st[i]=='1')
        {
            f=1;
            continue;
        }
       else if(st[i]=='?')
        {
            if(f)st[i]='1';
            else st[i]='0';
        }

    }
    cout<<st<<nn;}
    return 0;
}
