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
    cin>>t;
    while(t--){
        ll n, en, et, pt, i, j, k=0, x, c = 0, tn = 0;
        cin >> n >> en >> et >> pt;
        vl v;

        for (i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        bool f=0;
        i=0;
        while (1)
        {

            x = v[i] + pt;
            for (; i <v.size();)
            {
              
                if (v[i] <= x + et)
                {
                    k++;
                  if(!f)f=1;
                }
                else { if(f)!f; break;}
                  if(f)i++;
                // cout<<i<<" "<<k<<endl;
                if(k==en){    break;}
              
            }
            //cout<<"f="<<f<<" i="<<i<<endl;
         c++;
        //    cout<<"c="<<c<<endl;
            if(i==n)break;
        k=0;
        }
       
        cout<<c << endl;
    }
    }
