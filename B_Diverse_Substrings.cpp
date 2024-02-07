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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    string st;
    cin>>n>>st;
    ll ans=0;
    for(i=0;i<n;i++)
    {
        set<char>stt;
        unordered_map<char,ll>mp;
        ll tem=0;
        ll high=100;
        for(j=i;j<min(n,i+high);j++)
        {
            stt.insert(st[j]);
            mp[st[j]]++;
            tem=max(tem,mp[st[j]]);
            if(tem<=stt.size())ans++;
        }
    }
    cout<<ans<<nn;}
    return 0;
}
