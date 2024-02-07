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
    string st; cin>>st;
    a=st[0]-48;
    if(a==1)cout<<19<<nn;
    else if(a==2)cout<<29<<nn;
    else if(a==3)cout<<37<<nn;
    else if(a==4)cout<<41<<nn;
    else if(a==5)cout<<59<<nn;
    else if(a==6)cout<<67<<nn;
    else if(a==7)cout<<71<<nn;
    else if(a==8)cout<<83<<nn;
    else if(a==9)cout<<97<<nn;
    else cout<<-1<<nn;}
    return 0;
}
