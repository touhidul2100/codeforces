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
    cin>>n>>m>>k;
    set<ll>st1,st2;
    for(i=0;i<n;i++){cin>>a;st1.insert(a);}
    for(i=0;i<m;i++){cin>>a;st2.insert(a);}
    map<ll,ll>mp;
    for(auto x:st1)mp[x]++;
    for(auto x:st2)mp[x]++;
    ll common=0,s1=0,s2=0;
    for(i=1;i<=k;i++)
    {
        if(mp[i]>1)common++;
        else if(st1.count(i)){s1++;}
        else if(st2.count(i))s2++;
    }
    if(s2<s1)swap(s1,s2);
    // cout<<common<<" "<<s1<<" "<<s2<<nn;
    k/=2;
    if(s1+common<k){cout<<"NO"<<nn;continue;}
    common=common-(k-s1);
    // cout<<common<<" "<<s1<<" "<<s2<<nn;
    if(common+s2==k)cout<<"YES"<<nn;
    else cout<<"NO"<<nn;
   } return 0;
}
