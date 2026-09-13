#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve() {
    
    int n,m;
    cin >> n >> m ;
 
    if(m==1)
    {
        cout<<0<<endl;
        return ;
    }
 
 
    cout<< n-(n/m)<<endl;
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