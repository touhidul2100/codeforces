#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n) for (auto i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;while(t--){
    ll i,j,min,max,n;
    cin>>n;
    vl v(n);
    read(v,n);
    min=1;max=n;
    ll k=n-1;i=0;
    if(n<4){cout<<-1<<endl;continue;}
    while(i<=k){
      
      if(v[i]==min){i++;min++;}
      else if(v[i]==max){i++;max--;}
       else if(v[k]==min){k--;min++;}
      else if(v[k]==max){k--;max--;}
        else break;
         
    }
    if(k>=i)
    {
        cout<<i+1<<" "<<k+1<<endl;
    }
    else cout<<-1<<endl;
    }
    return 0;
}
