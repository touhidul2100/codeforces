#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 200005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k;
    cin>>n;vl v(n);read(v,n);
    bool odd=0,even=0;
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)even=1;
        else odd=1;
    }
    if(odd &even)cout<<2<<nn;
    else {
        bool f=0;
        k=3;
        while(k<10005)
        {
            set<ll>st;
            for(i=0;i<n;i++)
            st.insert(v[i]%k);
            if(st.size()==2)
            {
                f=1;
                cout<<k<<nn;
                break;
            }
            k++;
        }
        if(!f)
        {
             k=mn(v);
             ll cnt=0;
        while(cnt++<10000 && k<=inf)
        {
            set<ll>st;
            for(i=0;i<n;i++)
            st.insert(v[i]%k);
            if(st.size()==2)
            {
                f=1;
                cout<<k<<nn;
                break;
            }
            k++;
        }
        }
          if(!f)
        {
             k=mx(v);
             ll cnt=0;
        while(cnt++<10000 && k>1)
        {
            set<ll>st;
            for(i=0;i<n;i++)
            st.insert(v[i]%k);
            if(st.size()==2)
            {
                f=1;
                cout<<k<<nn;
                break;
            }
            k--;
        }
        }
    }
   } return 0;
}