#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl '
'
 
const int MOD = 1e9 + 7;
 
int compute_pow(int base, int exp) {
    int ans_val = 1;
    base %= MOD;
    while(exp > 0) {
        if(exp & 1) ans_val = (ans_val * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return ans_val;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int neg_count = 0;
    set<int> unique_vals;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == -1) {
            neg_count++;
        } else {
            unique_vals.insert(a[i]);
        }
    }
    
    int distinct_size = unique_vals.size();
    
    int adj_pairs = 0;
    for(int i = 1; i < n; i++) {
        if(a[i - 1] != -1 && a[i] - a[i - 1] == 1) {
            adj_pairs++;
        }
    }
    
    int result = compute_pow(2, n - neg_count - distinct_size);
    
    if(neg_count >= 2) {
        result = (result * compute_pow(2, neg_count - 1)) % MOD;
    }
    
    if(neg_count > 0) {
        int extra = compute_pow(2, neg_count - 1) * compute_pow(2, n - distinct_size - neg_count) % MOD;
        extra = (extra * adj_pairs) % MOD;
        result = (result + extra) % MOD;
    }
    
    result %= MOD;
    cout << result << endl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}