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
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, j, k, sm = 0;
        vector<string> v;
        string fk;
        for (i = 0; i < 3; i++)
        {
            cin >> fk;
            v.pb(fk);
        }
    char c;
    c=v[0][0];
    if((v[0][0]==c&&v[0][1]==c&&v[0][2]==c)||(v[0][0]==c&&v[1][0]==c&&v[2][0]==c)||(v[0][0]==c&& v[1][1]==c&&v[2][2]==c))
{
    if(c!='.'){
    cout<<c<<nn;
    continue;}
}
c=v[0][1];
if(v[0][1]==c&&v[1][1]==c&&v[2][1]==c)
{
     if(c!='.'){
    cout<<c<<nn;
    continue;}
}
c=v[0][2];
if((v[0][2]==c&&v[1][2]==c&&v[2][2]==c)||(v[0][2]==c&&v[1][1]==c&&v[2][0]==c))
{
     if(c!='.'){
    cout<<c<<nn;
    continue;}
}
c=v[1][0];
if(v[1][0]==c&&v[1][1]==c&&v[1][2]==c)
{
     if(c!='.'){
    cout<<c<<nn;
    continue;}
}
c=v[2][0];
if(v[2][0]==c&&v[2][1]==c&&v[2][2]==c)
{
     if(c!='.'){
    cout<<c<<nn;
    continue;}
}
cout<<"DRAW"<<nn;
    }
    return 0;
}
