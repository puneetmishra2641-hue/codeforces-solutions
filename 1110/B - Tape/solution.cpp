#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve() {
    int n, m , k;
    cin >>n>> m >>k;
 
    vector<int> a(n);
    for (int i = 0; i < n; i ++ ) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    vector<int> d;
    for(int i = 0 ; i < n - 1 ; i ++ ) {
        int temp = a[i + 1] - a[i] - 1;
        d.push_back(temp);
    }
 
    sort(d.begin(), d.end());
 
    int a1 = n; 
    
    for (int i = 0; i < n - k; i ++ ) {
        a1 = a1 + d[i];
    }
 
    cout<< a1 <<endl;
}
 
signed main() {
   
    solve();
}