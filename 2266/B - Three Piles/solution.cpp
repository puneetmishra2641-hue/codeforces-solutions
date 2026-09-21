#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    
    int a,b,c;
    cin >> a >> b >> c;
 
   if(a>=b)
   {
    cout<<a+c-b<<endl;
    return;
 
   }
 
   cout<<max(a+c-b,b-a)<<endl;
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