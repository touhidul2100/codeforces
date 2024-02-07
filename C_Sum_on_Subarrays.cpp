#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)         \
    for (auto &val : _a) \
        cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
ll khbe(int n)
{
    ll ans;
    ll f = 1;
    ll l = n;
    ll mid;
    while (f <= l)
    {

        mid = (f + l) / 2;
        // cout<<f<<" "<<l<<" "<<mid<<endl;
        if (((mid * (mid + 1)) / 2) <= n && (((mid + 1) * (mid + 2)) / 2) > n)
        {
            ans = mid;
            break;
        }
        if ((mid * (mid + 1)) / 2 > n)
            l = mid;
        else
            f = mid + 1;
    }
    return ans;
}
void solve(ll n,ll k)
{

    ll  i,n1,n2;
 
        ll ans = khbe(k);
        // cout<<"ans="<<ans<<endl;
        ll lhbe = k - (ans * (ans + 1)) / 2;
       // cout<<"lhbe="<<lhbe<<endl;
        ll total = n;
        ll t1 = total - ans;
        
            for (i = 0; i < ans; i++)
            {
                // v.push_back(2);
                cout<<2<<" ";
            }
            ll tm=((ans-lhbe+1)*2)-1;
           
            if(ans<n) cout<<-tm<<" ";
            total = total - ans -1;
            for (i = 0; i < total; i++)
            {
                cout << -1000 << " ";
                // v.push_back(1000);
            }
            cout << endl;
      
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, i;
        cin >> n >> k;
   
       if(k>0)
       {
        solve(n,k);
       
       }

if (k == 0)
        {
            for (i = 0; i < n - 1; i++)
                cout << -2 << " ";
            cout << -2 << endl;
           continue;
        }
         
    }
    return 0;
}
