#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve() {
    int n;
    cin >> n;
 
    string s, t;
    cin >> s >> t;
 
    int i = 0, j = 0;
 
    while (i < n && j < n) {
 
        // Skip all 'b' characters
        while (i < n && s[i] == 'b') i++;
        while (j < n && t[j] == 'b') j++;
 
        // One string has finished its non-b characters
        if (i == n || j == n) {
            break;
        }
 
        // Non-b characters must match
        if (s[i] != t[j]) {
            cout << "NO
";
            return;
        }
 
        // 'a' can only move right
        if (s[i] == 'a' && i > j) {
            cout << "NO
";
            return;
        }
 
        // 'c' can only move left
        if (s[i] == 'c' && i < j) {
            cout << "NO
";
            return;
        }
 
        i++;
        j++;
    }
 
    // Check whether any non-b character remains
    while (i < n && s[i] == 'b') i++;
    while (j < n && t[j] == 'b') j++;
 
    if (i == n && j == n) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int q;
    cin >> q;
 
    while (q--) {
        solve();
    }
 
    return 0;
}