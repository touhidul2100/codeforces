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
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
Optimization();
//fileread("input.txt");
//filewrite("output.txt");
 ll Cases = 1;
   // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>k>>n;vl v(n);read(v,n);
    set<ll>st;
    multiset<ll>mul;
    mul.insert(k-0);
    st.insert(k);
    st.insert(0);
    for(i=0;i<n;i++)
    {
        // st.insert(v[i]);
        auto it1=st.upper_bound(v[i]);
        auto it2=st.lower_bound(v[i]);
        if(it2!=st.begin())
        {it2--;}
            auto it3=mul.find(*it1-*it2);
            mul.erase(it3);
            mul.insert(*it1-v[i]);
            mul.insert(v[i]-*it2);
            auto it5=mul.end();it5--;
            cout<<*it5<<" ";
            st.insert(v[i]);
   
       
    }
    cout<<nn;
   } return 0;
}
