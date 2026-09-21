#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int ans = n;
    int j = 0;
    
    for(int i = 0; i < n - 1; i++) {
        if(j < i + 1) {
            j = i + 1;
        }
        
       
        while(j < n && a[i] + a[i+1] > a[j]) {
            j++;
        }
        
        int currentwindow = j - i;
        int operations = n - currentwindow;
        ans = min(ans, operations);
    }
    
    cout << ans << endl;
}
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}