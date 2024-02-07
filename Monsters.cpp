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
#define N 1005
#define ok cout << "OK" << nn;
pl par[N][N];
ll dista[N][N];
ll distm[N][N];
ll para[N][N];
ll parm[N][N];
bool isvalid(ll i, ll j, ll n, ll m, vector<string> v)
{
    bool f = 0;
    if (i >= 0 && i < n && j >= 0 && j < m && v[i][j] != '#')
        f = 1;
    return f;
}
int main()
{
    Optimization();

    // fileread("test_input(2).txt");
    // filewrite("output.txt");

    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, j, k, sm = 0;
        cin >> n >> m;
        vector<string> v;
        string st;
        for (i = 0; i < n; i++)
        {
            cin >> st;
            v.pb(st);
        }

        priority_queue<pair<ll, pl>, vector<pair<ll, pl>>, greater<>> qa;
        priority_queue<pair<ll, pl>, vector<pair<ll, pl>>, greater<>> qm;
        // queue<pair<ll, pl>> qa;
        // queue<pair<ll, pl>> qm;
        bool f = 0;
        ll si, sj;
        ll ai, aj;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (v[i][j] == 'A')
                {
                    qa.push({0, {i, j}});
                    dista[i][j] = 0;
                    par[i][j] = {i, j};
                    ai = i;
                    aj = j;
                    if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                    {
                        f = 1;
                        break;
                    }
                }
                else
                    dista[i][j] = inf;
                if (v[i][j] == 'M')
                {
                    qm.push({0, {i, j}});
                    distm[i][j] = 0;
                }
                else
                    distm[i][j] = inf;
            }
            if (f)
                break;
        }
        if (f)
        {
            cout << "YES" << nn << 0 << nn;
            continue;
        }
        ll arai[4] = {0, 0, 1, -1};
        ll araj[4] = {1, -1, 0, 0};
        while (!qm.empty())
        {

            i = qm.top().ss.ff;
            j = qm.top().ss.ss;
            ll dis = qm.top().ff;
            qm.pop();
            if (dis > distm[i][j])
            {

                continue;
            }
            for (k = 0; k < 4; k++)
            {

                ll ti = i + arai[k], tj = j + araj[k];
                if ((ti >= 0 && ti < n && tj >= 0 && tj < m && v[ti][tj] != '#') && (1 + dis < distm[i + arai[k]][j + araj[k]]))
                {
                    distm[i + arai[k]][j + araj[k]] = dis + 1;
                    qm.push({distm[i + arai[k]][j + araj[k]], {i + arai[k], j + araj[k]}});
                }
            }
        }

        while (!qa.empty())
        {

            i = qa.top().ss.ff;
            j = qa.top().ss.ss;
            ll dis = qa.top().ff;
            qa.pop();
            if (dis > dista[i][j])
            {

                continue;
            }
            for (k = 0; k < 4; k++)
            {
                ll ti = i + arai[k], tj = j + araj[k];
                if ((ti >= 0 && ti < n && tj >= 0 && tj < m && v[ti][tj] != '#') && (1 + dis < dista[i + arai[k]][j + araj[k]]))
                {
                    dista[i + arai[k]][j + araj[k]] = dis + 1;
                    par[ti][tj]={i,j};
                    if ((i + arai[k] == 0 || i + arai[k] == n - 1 || j + araj[k] == 0 || j + araj[k] == m - 1) && ((dista[i + arai[k]][j + araj[k]]) < (distm[i + arai[k]][j + araj[k]])))
                    {
                        si = i + arai[k];
                        sj = j + araj[k];
                        f = 1;
                        break;
                    }
                    qa.push({dista[i + arai[k]][j + araj[k]], {i + arai[k], j + araj[k]}});
                }
            }
            if(f)break;
        }

        // // }
        vector<char> ans;
        if (f)
        {
            cout<<"YES"<<nn;
            pl p = {ai, aj};
            ll cnt=0;
            while (si != ai || sj != aj)
            {
                // if(cnt++>20)break;
                i = si;
                j = sj;
                si = par[i][j].ff;
                sj = par[i][j].ss;
                if (i == si + 1)
                    ans.pb('D');
                else if (i == si - 1)
                    ans.pb('U');
                else if (j == sj + 1)
                    ans.pb('R');
                else if (j == sj - 1)
                    ans.pb('L');
               //cout<<i<<" "<<j<<" "<<si<<" "<<sj<<" "<<nn;
            }
            reverse(all(ans));
            cout<<ans.size()<<nn;
            for (i = 0; i < ans.size(); i++)
                cout << ans[i];
            cout << nn;
        }

        else cout<<"NO"<<nn;
    }
    return 0;
}