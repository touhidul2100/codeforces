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
    // ll test,tst;
    // cin>>test;
    // for(tst=1;tst<=test;tst++){
    ll n, i, m, a, b, j, k, sm = 0;
    cin >> n;
    vector<string> st(3);
    for (i = 0; i < 3; i++)
        cin >> st[i];
    vl a1[11], a2[11], a3[11];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            ll tm = st[i][j] - 48;
            if (i == 0)
            {
                a1[tm].pb(j + 1);
            }
            else if (i == 1)
            {
                a2[tm].pb(j + 1);
            }
            else if (i == 2)
            {
                a3[tm].pb(j + 1);
            }
        }
    }
    ll ans = n + 1;
    for (i = 0; i < 10; i++)
    {
         bool f1 = 0, f2 = 0, f3 = 0;
         ll in1=n+1,in2=n+1,in3=n+1;
        for (j = 0; j <=n; j++)
        {
           if(!f1){
            for (k = 0; k < a1[i].size(); k++)
            {
                if (j % n + 1 == a1[i][k])
                {
                    f1 = 1;
                    in1=j;break;
                }
            }}
            if(!f2){
            for (k = 0; k < a2[i].size(); k++)
            {
                if (j % n + 1 == a2[i][k])
                {
                    f2 = 1;
                    in2=j;break;
                }
            }}
            if(!f3){
            for (k = 0; k < a3[i].size(); k++)
            {
                if (j % n + 1 == a3[i][k])
                {
                    f3 = 1;
                   in3=j;break;
                }
            }}
         
        }
        if(f1&&f2&&f3)
        {
            ans=min(ans,max({in1,in2,in3}));
        }
    }

    if (ans <= n)
     {
        ll tm=ans;
        while(tm<=n)
        {
           
           if(st[0][tm%n+1]==st[1][tm%n+1]&&st[1][tm%n+1]==st[2][tm%n+1])tm++;
           else break;
           
        }
        cout<<min(n,tm)<<nn;
        
     }
    else
        cout << -1 << nn;

    return 0;
}
