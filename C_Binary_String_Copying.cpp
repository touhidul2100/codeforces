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
    ll n,m, i, j, k, sm = 0;
   string st;
   cin>>n>>m>>st;
   vector<ll>one(n+2,n);
    vector<ll>zero(n+2,-1);
    for(i=n-1;i>=0;i--)
    {
        one[i]=st[i]=='1'?i:one[i+1];
    }
    for(i=0;i<n;i++)
    {
        zero[i+1]=st[i]=='0'?i:zero[i];
    }
    set<pair<ll,ll>>stt;
    for(i=0;i<m;i++)
    {
        cin>>j>>k;
        j--;
        j=one[j];
        k=zero[k];
        if(j>=k)stt.insert({-1,-1});
        else stt.insert({j,k});
    }
    cout<<stt.size()<<nn;}
    return 0;
}
