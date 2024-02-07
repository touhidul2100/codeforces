#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    cin >> n >> k;
    // if(k==1)
    // {
    //     for(i=1;i<=n;i++)cout<<i<<" ";cout<<nn;
        
    //     //continue;
    // }
    bool f = 0;
    ll l = 1, r = n, tm = n / k;
    tm += 1;
    ll ara[n + 1];
    // for (i = 1; i <= n; i++)
    //     ara[i] = 0;
    // cout<<n<<" "<<k<<nn;
    // ll sss=1;
    // ok
    for (i = 1; i<= n;)
    {
      // std::cout<<"1st i"<<i<<nn;
      ll tmm=i;
        if (!f)
        {
            cout<<r<<" ";
            // ara[i] = r;
            // std::cout << "loop 1:" <<"i="<<i<<" r="<< r << nn;
            // cout<<"so ara[i]"<<" "<<ara[i]<<nn;
            r--;
            for (; i < min(tmm + k - 2,n); i++)
            {
                     if (i> n)
                   { break;}
               cout<<tm<<" ";
                //std::cout << "j=" << j << " tm=" << tm << nn;
                tm++;
           
            }
            i++;
            f = !f;
           //std:: cout<<"i="<<i<<nn;
        }


         else if(f)
        {
                cout<<l<<" ";
            // ara[i] = l;
           // std::cout << "loop 2:" << l << nn;
          //  std::cout << "loop 2:" <<"i="<<i<<" l="<< l << nn;
            l++;
            i++;
            f = !f;
            /// std:: cout<<"i="<<i<<nn;
        }
       
    }
 cout<<nn;}
    // for (i = 1; i <= n; i++)
    //     std::cout << ara[i] << " ";
    // std::cout << nn;
    return 0;
}
