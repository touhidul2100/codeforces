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
bool pal(string st,ll l,ll r)
{
    bool f=1;
    while(l<=r)
    {
        if(st[l]!=st[r])
        {
            f=0;
            break;
           
        }
         l++;r--;
    }
    return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    string st;
    cin>>st;
    n=st.size();
    ll ans=1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pal(st,i,j))
            {
                ll tm=j-i+1;
                ans=max(ans,tm);
            }
        }
    }
    cout<<ans<<nn;
    return 0;
}
