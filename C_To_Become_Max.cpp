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
bool check(ll i, ll mid, vl v, ll n, ll k)
{
    bool f = 1;
    if (i == n - 2)
    {
        if ((v[i] + mid) > (v[i + 1] + 1))
            f = 0;
    }
    else
    {
        ll tm = v[i] + mid - 1;
        ll sm = 0;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (j == n - 2)
            {
                    if(tm<=v[j])break;
              else  if (tm > v[n - 1] + 1)
                {
                   
                    f = 0;
                }
                else if (v[j] < tm)
                {
                    sm += (tm - v[j]);
                }
                break;
            }
            if (v[j] < tm)
            {
                sm += (tm - v[j]);
                tm--;
            }
            else if(tm<=v[j])
                break;
        }
            //cout<<"sm="<<sm<<nn;
        if (sm > k)
            f = 0;
    //              cout<<"Check"<<nn;
    // cout<<"i="<<i<<" sm="<<sm<<nn;
    }
   
    return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n >> k;
    vl v(n);
    read(v, n);
    ll ans = 0;
    for (i =0; i <n-1; i++)
    {
        ll mid, left = 0, right = k;
        bool f1=0;
        while (left <=right)
        {
            mid = left + (right - left) / 2;
           
          //cout << "left=" << left << " right=" << right << " mid=" << mid << nn;
            bool f = check(i, mid, v, n, k - mid);

           
            if (f)
            {
           // cout << "DUKSA" << nn;
                ans = max(ans, v[i] + mid);
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
            if(f1 && left>=right)break;
            if(left==right)f1=1;
        //cout << " ans=" << ans << nn;
           // break;
        }
     // cout << "i=" << i << " ans=" << ans << nn;
    }
    for(i=0;i<n;i++)
    ans=max(ans,v[i]);
    cout << ans << nn;}
    return 0;
}
