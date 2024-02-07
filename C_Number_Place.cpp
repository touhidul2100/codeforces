#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
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
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 2000005
#define ok cout << "OK" << nn;
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        n = 10;
        ll ara[10][10];
        for (i = 1; i <= 9; i++)
            for (j = 1; j <= 9; j++)
                cin >> ara[i][j];
                bool f=1;
        for (i = 1; i < n; i++)
        {
            set<ll>st;
            for (j = 1; j < n; j++)
            {
                st.insert(ara[i][j]);
            }
            if(st.size()!=9)
            {
                f=0;break;
            }
        }
         for (i = 1; i < n; i++)
        {
            set<ll>st;
            for (j = 1; j < n; j++)
            {
                st.insert(ara[j][i]);
            }
            if(st.size()!=9)
            {
                f=0;break;
            }
        }
        if(!f){cout<<"No"<<nn;continue;}
        ll rr=3;
        ll row=-2;
        while(rr--)
        {
            row+=3;
            ll col=-2;
            ll cc=3;
            while(cc--)
            {
                col+=3;
                set<ll>st;
                for(i=row;i<row+3;i++)
                {
                    for(j=col;j<col+3;j++)
                    {
                        st.insert(ara[i][j]);
                    }
                }
                      if(st.size()!=9)
                    {
                      //  cout<<"Row="<<row<<"col="<<col<<nn;
                        f=0;break;
                    }
            }
        }

if(f)cout<<"Yes"<<nn;
else cout<<"No"<<nn;
















    }
    return 0;
}
