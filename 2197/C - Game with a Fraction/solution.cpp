#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int p,q;
    cin >> p >> q;
 
    if(p==2 && q==3)
    {
        cout<<"Bob"<<endl;
        return;
    }
 
    if(p>=q || q<=3) 
    {
        cout<<"Alice"<<endl;
        return;
    }
 
    int gap=q-p;
    int temp=2*gap;
 
 
   if(temp <=  p) 
   {
     cout<<"Bob"<<endl;
     return;
   }
 
    cout<<"Alice"<<endl;
 
 
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