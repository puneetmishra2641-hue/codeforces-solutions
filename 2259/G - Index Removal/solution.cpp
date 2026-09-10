#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<int> puneet(n);
    puneet[0] = 0;
    for (int i = 1; i < n; i++) {
        puneet[i] = a[i] - a[i - 1];
    }
 
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + (k - puneet[i]);
    }
 
   
    vector<int> pre(n + 2, 0);
    for (int i = 0; i <= n; i++) {
        pre[i + 1] = pre[i] + prefix_sum[i];
    }
 
    cout << 0 << " ";
 
    for (int i = 1; i < n - 1; i++) {
        int temp = (a[i + 1] - a[i - 1]) - k;
        if (temp <= 0) {
            cout << 0 << " ";
            continue;
        }
 
       
        int target = prefix_sum[i + 2] + temp;
 
        auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), target);
        
        int idx = it - prefix_sum.begin();
        int x = idx - 2; 
        int y = x - i; 
 
        if (y > 0) {
            int sum = pre[x + 2] - pre[i + 2]; 
            int operation = (y * target) - sum; 
            cout << operation << " ";
        } else {
            cout << 0 << " ";
        }
    }
 
    cout << 0 <<endl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}