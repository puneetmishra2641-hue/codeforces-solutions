#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    
    vector<int>a(3);
    for(int i=0 ; i<3;i++)cin >>a[i];
    sort(a.begin(),a.end());
    cout<<a[1]<<endl;
    
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