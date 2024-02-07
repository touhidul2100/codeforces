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
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k;
    cin >> n >> k;
    vl v1(n), v2(n);
    read(v1, n);
    read(v2, n);
    ll sm[n + 5];
    sm[0] = 0;
    for (i = 1; i <= n; i++)
        sm[i] = sm[i - 1] + v1[i - 1];
    ll dv[n + 2];
    dv[0] = 1;
    for (i = 1; i < n; i++)
    {
        if ((v2[i - 1] % v2[i]) == 0)
        {
            dv[i] = dv[i - 1] + 1;
        }
        else
            dv[i] = 1;
    }
    ll ans1 = 0;
    ll on=1;
    for (i = 0; i < n; i++)
    {
       // cout<<"top i="<<i<<endl;
        if(v1[i]>k)continue;
        else if((v1[i]==k)||(i>0&&(v1[i]+v1[i-1]>k))){ans1=max(ans1,on);continue;}
        ll tm = sm[i + 1] - sm[i - (dv[i] - 1)];
        if (tm <= k)
        {
            ans1 = max(ans1, dv[i]);
        }
        else 
        {
      // cout<<"i="<<i<<nn;
            ll right=i+1,left=i+1-(dv[i]),mid;;
          //  cout<<"left="<<left<<" right="<<right<<nn;
            ll cnt=0;
            while(left<=right)
            {
                // if(cnt++>5)break;
               
                mid=left+(right-left)/2;
               // cout<<"left="<<left<<" right="<<right<<" mid"<<mid<<nn;
                if((sm[i+1]-sm[mid]==k)||((sm[i+1]-sm[mid]<k)&&(sm[i+1]-sm[mid]>k))||(left==right))
                    {
                         tm=i-(mid-1);
                       //  cout<<"mid="<<mid<<" tm="<<tm<<endl;
                        ans1=max(ans1,tm);
                        break;
                    }
                        else if((sm[i+1]-sm[mid])<k)right=mid;
                        else left=mid+1;
                        
            }


        }
        //cout<<"ans1="<<ans1<<nn<<nn;;
    }
    cout << ans1 << nn;}
    return 0;
}
