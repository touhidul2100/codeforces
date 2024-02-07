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
    ll test;
    cin>>test;
    while(test--){
ll n,i,j;
string st;
cin>>st;
if(st[0]=='a' && st[1]=='b'){
cout<<st[0]<<" ";
for(i=1;i<st.size()-1;i++)cout<<st[i];cout<<" ";
cout<<st[st.size()-1]<<nn;
}
else {
cout<<st[0]<<" "<<st[1]<<" ";
for(i=2;i<st.size();i++)cout<<st[i];cout<<nn;

}}
    return 0;
}

