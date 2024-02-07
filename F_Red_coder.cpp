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
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n;
   bool f[9];
   for(i=1;i<=8;i++)f[i]=1;
    ll mnn=0,mxx=0;
    bool f1=0;
    for(i=1;i<=n;i++)
    {
        cin>>a;
          k=(a/400)+1;
        if(k>8)
        {
            mxx++;
            if(mnn==0){f1=1;mnn++;}
            continue;
        }
       if(f[k])
        {
            mnn++;
            mxx++;
           f[k]=0;
        }
    }
    if(f1 && mnn>1)mnn--;
    cout<<mnn<<" "<<mxx<<nn;
    return 0;
}
