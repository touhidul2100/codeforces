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
    ll n, i,m,a,b, j, k,s,d, sm = 0;
    cin>>s>>d>>k;
    ll l1=(s*2)+(d*2);
    ll l2=(s*1)+(d*2);
    cout<<"Case #"<<tst<<": ";
    if(l2>=k && l1>k)
    {
        cout<<"YES"<<nn;
    }
    else 
    cout<<"NO"<<nn;}
    return 0;
}
