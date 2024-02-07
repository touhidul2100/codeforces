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
    string st;
    cin>>st;
    ll mnn=INT_MAX;
   for(i='a';i<='z';i++)
   {
    ll far=0;
    ll mxx=0;
    for(j=0;j<st.size();j++)
    {
        if(st[j]==i)
        {
            mxx=max(mxx,far);
            far=0;
        }
        else far++;
    }
    mxx=max(far,mxx);
    mnn=min(mnn,mxx);
   }
   ll ans=0;
   while(mnn>2)
   {
    ans++;
    mnn/=2;
   }
   if(mnn==2)ans+=2;
   else if(mnn==1)ans++;
   cout<<ans<<nn;
 }
    return 0;
}
