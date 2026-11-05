#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve() {
    int k;
    cin >> k;
 
    vector<vector<vector<int>>> g(k + 1);
    vector<int> leaf(k + 1, 1);
    vector<int> par(k + 1, -1);
    vector<int> n(k + 1);
 
    int base = -1;
 
    for (int i = 1; i <= k; i++) {
        cin >> n[i];
 
        g[i].resize(n[i] + 1);
 
        for (int j = 0; j < n[i] - 1; j++) {
            int u, v;
            cin >> u >> v;
 
            g[i][u].push_back(v);
            g[i][v].push_back(u);
        }
 
        if (n[i] > 1) {
            for (int j = 1; j <= n[i]; j++) {
                if (g[i][j].size() == 1) {
                    leaf[i] = j;
                    par[i] = g[i][j][0];
                    break;
                }
            }
 
            if (base == -1) {
                base = i;
            }
        }
    }
 
    if (base == -1) {
        // All trees have only one vertex
        for (int i = 2; i <= k; i++) {
            cout << 1 << " " << 1 << " "
                 << i << " " << 1 << "
";
        }
        return;
    }
 
    // Connect parent of base tree's leaf
    // to one leaf of every other tree.
 
    for (int i = 1; i <= k; i++) {
        if (i == base) continue;
 
        cout << base << " " << par[base] << " "
             << i << " " << leaf[i] << "
";
    }
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}