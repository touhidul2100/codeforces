#include <bits/stdc++.h>
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define Noway cout << -1 << endl
#define yuyuko std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0)
#define int int64_t
using namespace std;
char mp[110][110];
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
signed main() {
    int h,w,n;
    cin >> h >> w >> n;
    for (int i = 1;i <= h;i++) {
        for (int j = 1;j <= w;j++) {
            mp[i][j] = '.';
        }
    }
    int x = 1,y = 1;
    int d = 0;
    for (int i = 1;i <= n;i++) {
        if (mp[y][x] == '.') {
            mp[y][x] = '#';
            d = (d + 1) % 4;
        } else {
            mp[y][x] = '.';
            d = (d + 3) % 4;
        }
        x += dx[d];
        x = (x + w - 1) % w + 1;
        y += dy[d];
        y = (y + h - 1) % h + 1;
    }
    for (int i = 1;i <= h;i++) {
        for (int j = 1;j <= w;j++) {
            cout << mp[i][j];
        }
        cout << endl;
    }
}