#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    for (int i = 1; i <= m; i++) {
        int u, v, d;
        cin >> u >> v >> d;
        adj[u].emplace_back(v, d);
        adj[v].emplace_back(u, -d);
    }
    vector<bool> vis(n + 1);
    vector<ll> dis(n + 1);
    for (int i = 1; i <= n; i++) {
        if (vis[i]) {
            continue;
        }
        vis[i] = true;
        queue<int> T;
        T.push(i);
        while (!T.empty()) {
            int u = T.front();
            T.pop();
        
            for (auto [v,w] : adj[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    dis[v] = dis[u] + w;
                    T.push(v);
                } else if (dis[v] != dis[u] + w) {
                    cout << "NO" << "\n";
                    return;
                }
            }
        }
    }
    cout << "YES" << "\n";
}

int main() {
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}