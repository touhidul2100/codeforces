#ifndef LOCAL
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma")
#endif

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define dbg(...) "11-111"
#endif

int32_t main() {
    ios_base::sync_with_stdio(0);   cin.tie(0);

    vector<vector<array<int, 2>>> ind(3);
    int sum = 0;
    for(int i = 0 ; i < 3 ; i++) {
        vector<string> g(4);
        for(auto &s : g)    cin >> s;
        for(int j = 0 ; j < 4 ; j++) for(int k = 0 ; k < 4 ; k++) if(g[j][k] == '#') {
            ind[i].push_back({j, k});
            sum += 1;
        }
    }

    if(sum != 16) {
        cout << "No\n";
        return 0;
    }

    bool doit = 0;

    auto solve = [&](vector<vector<array<int, 2>>> sol) {
        for(int i = 0 ; i < 3 ; i++) {
            int mnx = sol[i][0][0], mny = sol[i][0][1];
            for(auto &x : sol[i]) {
                mnx = min(mnx, x[0]);
                mny = min(mny, x[1]);
            }
            for(auto &x : sol[i]) {
                x[0] -= mnx;
                x[1] -= mny;
            }
            sort(sol[i].begin(), sol[i].end());
        }

        if(doit) {
            dbg(sol);
        }

        vector<int> ord = {0, 1, 2};
        int cnt = 0;
        do {

            vector<vector<bool>> vis(4, vector<bool>(4));
            auto valid = [&](int x, int y) {
                return x >= 0 && x < 4 && y >= 0 && y < 4 && !vis[x][y];
            };

            for(auto &x : ord) {
                bool fx = true;
                for(int i = 0 ; i < 4 ; i++) {
                    for(int j = 0 ; j < 4 ; j++)    if(fx && !vis[i][j]) {
                        fx = false;

                        int sx = -sol[x][0][0];
                        int sy = -sol[x][0][1];
                        for(auto &y : sol[x]) {
                            if(valid(i + y[0] + sx, j + y[1] + sy)) {
                                vis[i + y[0] + sx][j + y[1] + sy] = 1;
                                continue;
                            }
                            cnt++;
                            goto done;
                        }
                    }
                }
            }

            done:;

        } while(next_permutation(ord.begin(), ord.end()));

        return cnt < 6;
    };

    auto sol = ind;

    for(int i = 0 ; i < 4 ; i++) {
        ind[1] = sol[1];
        for(int j = 0 ; j < 4 ; j++) {
            ind[2] = sol[2];
            for(int k = 0 ; k < 4 ; k++) {
                if(i == 1 && j == 0 && k == 1) {
                    doit = 1;
                }
                if(solve(ind)) {
                    cout << "Yes\n";
                    return 0;
                }
                doit = 0;

                for(auto &val : ind[2]) {
                    val[0] = 3 - val[0];
                    swap(val[0], val[1]);
                }
            }
            for(auto &val : ind[1]) {
                val[0] = 3 - val[0];
                swap(val[0], val[1]);
            }
        }
        for(auto &val : ind[0]) {
            val[0] = 3 - val[0];
            swap(val[0], val[1]);
        }
    }

    cout << "No\n";

    return 0;
}

