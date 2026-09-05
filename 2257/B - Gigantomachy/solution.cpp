#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        long long a1, b1;
 
        cin >> a1;
        for (int i = 1; i < n; i++) {
            long long x;
            cin >> x;
        }
 
        cin >> b1;
        for (int i = 1; i < m; i++) {
            long long x;
            cin >> x;
        }
 
        long long A = a1 + n - 1;
        long long B = b1 + m - 1;
 
        if (A >= B)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
 
    return 0;
}