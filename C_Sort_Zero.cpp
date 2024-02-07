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
    ll n, i, j, k, sm = 0;
    cin>>n;vl v;map<ll,vector<ll>>mv;
    for(i=0;i<n;i++)
    {
        cin>>k;
        v.pb(k);
        mv[k].pb(i);
    }
    ll ind1=-1;
    for(i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        ind1=i;
    }
    ll ind2=-1;
    for(i=0;i<=ind1;i++)
    {
        ind2=max(ind2,mv[v[i]].back());
    }
    // cout<<ind1<<" "<<ind2<<nn;
    set<ll>st;
    for(i=0;i<=ind2;i++)st.insert(v[i]);
    cout<<st.size()<<nn;}
    return 0;
}
