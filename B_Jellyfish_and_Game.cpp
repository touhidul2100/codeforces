#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define pl pair<ll,ll>
#define vpl vector<pl>
#define fileread(x) freopen(x,"r",stdin)
#define filewrite(x) freopen(x,"w",stdout)
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define inf LONG_MAX
#define N 100005;
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m>>k;
    vl v1(n),vv1(n),v2(m),vv2(m);
    read(v1,n);read(v2,m);sort(all(v1));sort(all(v2));

   
        
            a=v1[0];
            b=v2[m-1];
            if(a<b)
            {
                v1[0]=b;
                v2[m-1]=a;
            }
       ll s1=0;ll s2=0;
        for(i=0;i<n;i++)s1+=v1[i];
       
       sort(all(v1));sort(all(v2));
             a=v2[0];
            b=v1[n-1];
            if(a<b)
            {
                v2[0]=b;
                v1[n-1]=a;
            }
            for(i=0;i<n;i++)s2+=v1[i];

        if(k&1)cout<<s1<<nn;
        else cout<<s2<<nn;
}
 
    return 0;
}
