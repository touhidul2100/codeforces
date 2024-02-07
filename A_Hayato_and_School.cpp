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
 ll n,i;
 cin>>n;vl v(n);read(v,n);
 vl ev,odd;
 bool f=0;
 for(i=0;i<n;i++)
 {
    if(v[i]%2==0)
    {
        ev.pb(i+1);
    }
    else odd.pb(i+1);
    if(odd.size()>=3)
    {f=1;
        cout<<"YES"<<nn;
        cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<nn;
        break;
    }
     if(odd.size()>=1 && ev.size()>=2)
    {f=1;
        cout<<"YES"<<nn;
        cout<<odd[0]<<" "<<ev[0]<<" "<<ev[1]<<nn;
        break;
    }
 }
 if(!f)cout<<"NO"<<nn;}
    return 0;
}

