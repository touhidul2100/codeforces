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
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
int n, m;
bool vis[1005][1005];
int a[1005][1005];
int cnt=0;
int dfs(int i, int j)
{
   
    vis[i][j] = true;
    int ans = a[i][j];
    if (i != 0 && a[i - 1][j] != 0 && !vis[i - 1][j])
    {
        ans += dfs(i - 1, j);
    }
    if (i != n - 1 && a[i + 1][j] != 0 && !vis[i + 1][j])
    {
        ans += dfs(i + 1, j);
    }
    if (j != 0 && a[i][j - 1] != 0 && !vis[i][j - 1])
    {
        ans += dfs(i, j - 1);
    }
    if (j != m - 1 && a[i][j + 1] != 0 && !vis[i][j + 1])
    {
        ans += dfs(i, j + 1);
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    int i, j;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            vis[i][j] = false;
            cin >> a[i][j];
        }
    }
int ans=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 0 || vis[i][j] == 1)
            {
                continue;
            }
            else
            {
            int tm=dfs(i,j);
                ans = max(ans,tm);
            }
        }
    }
    cout << ans << nn;
   
    }

    return 0;
}
