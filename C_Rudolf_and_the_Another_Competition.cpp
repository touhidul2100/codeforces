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
    ll n, m, h, i, j, k, sm = 0;
    cin >> n >> m >> h;
    vector<vector<ll>> v;
    ;
    for (i = 0; i < n; i++)
    {
        vl vv(m);
        read(vv, m);
        sort(all(vv));
        v.pb(vv);
    }
    ll fc, fp;
    for (i = 0; i < 1; i++)
    {
        ll t1 = 0;
        ll ttot = 0;
        ll cnt = 0;
        for (j = 0; j < m; j++)
        {
            t1 += v[i][j];
            if (t1 <= h)
            {
                ttot += t1;
                cnt++;
            }
        }
        fc = cnt;
        fp = ttot;
    }
    ll finalcnt = 0;
    vl vvv;
    vvv.pb(fp);
    for (i = 1; i < n; i++)
    {
        ll t1 = 0;
        ll ttot = 0;
        ll cnt = 0;
        for (j = 0; j < m; j++)
        {
            t1 += v[i][j];
            if (t1 <= h)
            {
                ttot += t1;
                cnt++;
            }
        }
      //  cout<<"after i="<<i<<" "<<cnt<<" "<<ttot<<nn;
        if (fc < cnt)
        {
            finalcnt++;
        }
        else if (fc == cnt)
        {
            vvv.pb(ttot);
        }
        
    }
    sort(all(vvv));
    for (i = 0; i < vvv.size(); i++)
    {
        if (vvv[i] == fp)
            break;
        else
            finalcnt++;
    }
    cout << finalcnt+1 << nn;}
    return 0;
}
