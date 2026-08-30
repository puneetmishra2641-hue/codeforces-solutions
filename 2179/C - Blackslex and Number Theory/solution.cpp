#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
 
    for(int i=0 ; i< n ; i++)
    {
        cin >> a[i];
    }
 
    sort(a.begin(),a.end());
 
    cout<<max(a[0],a[1]-a[0])<<endl;
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}