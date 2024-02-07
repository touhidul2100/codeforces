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
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
        ll n,i,k,b,s,j,sm1,sm2;
        cin>>n>>k>>b>>s;
     sm2=(k-1)*(n-1)+(b*k+k-1);
    sm1=b*k;
    // cout<<sm1<<" "<<sm2<<nn;
    if(sm1<=s && s<=sm2)
    {
      cout<<min(s,b*k+k-1)<<" ";
      s-=min(s,b*k+k-1);
      sm2-=min(s,b*k+k-1);
      n-=1;
      while(n--)
      {
        cout<<min(s,k-1)<<" ";
        if(s!=0)
        s-=min(s,k-1);
      }
      cout<<nn;
    }
    else 
    {
        cout<<-1<<nn;
    }}
    return 0;
}

