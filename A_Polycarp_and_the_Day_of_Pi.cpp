#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";cout<<endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout<<"OK"<<nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
 string st;
 string st1="314159265358979323846264338327";
 cin>>st;
 ll n=0;
 for(ll i=0;i<st.size();i++)
 {
    if(st[i]==st1[i])
    {
        n++;
    }
    else break;
 }
 cout<<n<<endl;}
    return 0;
}

