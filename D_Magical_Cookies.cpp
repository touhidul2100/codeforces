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
    cin >> n >> m;
    string st;
  char vv[n][m];
    for (i = 0; i < n; i++)
    {
        for(j=0;j<m;j++)
        cin>>vv[i][j];
    }
    ll row[n ][26];
    ll col[m][26];
    for (i = 0; i < n; i++)
        for (j = 0; j < 26; j++)
            row[i][j] = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < 26; j++)
            col[i][j] = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            row[i][vv[i][j] -'a']++;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            col[i][vv[j][i] - 'a']++;
        }
    }
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (row[i][vv[i][j] - 'a'] == 1 && col[j][vv[i][j] - 'a'] == 1)
            {
                cnt++;
               // cout<<"cnt="<<cnt<<" char="<<vv[i][j]<<nn;
            }
        }
    }
    cout << cnt << nn;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> c(h);

    for (int i = 0; i < h; i++) cin >> c[i];

    const int m = 26;
    vector<vector<int>> row(h, vector<int>(m));
    vector<vector<int>> col(w, vector<int>(m));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            row[i][c[i][j] - 'a']++;
            col[j][c[i][j] - 'a']++;
        }
    }

    bool upd = true;

    vector<bool> del_row(h, false);
    vector<bool> del_col(w, false);

    while (upd) {
        int total, k;
        upd = false;
        vector<int> row_id;
        vector<int> col_id;
        for (int i = 0; i < h; i++) {
            if (del_row[i]) continue;
            total = 0, k = 0;
            for (int j = 0; j < m; j++) {
                if (row[i][j]) {
                    total += row[i][j];
                    k++;
                }
            }
            if (total >= 2 && k == 1) {
                // del
                del_row[i] = true;
                row_id.push_back(i);
            }
        }


        total = 0, k = 0;
        for (int i = 0; i < w; i++) {
            if (del_col[i]) continue;
            total = 0, k = 0;
            for (int j = 0; j < m; j++) {
                if (col[i][j]) {
                    total += col[i][j];
                    k++;
                }
            }
            if (total >= 2 && k == 1) {
                del_col[i] = true;
                col_id.push_back(i);
            }
        }

        for (int id : row_id) {
            for (int i = 0; i < w; i++) {
                row[id][c[id][i]-'a']--;
                col[i][c[id][i]-'a']--;
                upd = true;
            }
        }

        for (int id : col_id) {
            for (int i = 0; i < h; i++) {
                col[id][c[i][id]-'a']--;
                row[i][c[i][id]-'a']--;
                upd = true;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (del_row[i] || del_col[j]) continue;
            ans++;
        }
    }

    cout << ans << endl;
}