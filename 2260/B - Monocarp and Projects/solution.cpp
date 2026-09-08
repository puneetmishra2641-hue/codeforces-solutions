#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int x,y,k;
    cin >>x >>y>>k;
 
    int ans=0;
 
    while( k && y/x >1)
    {
        ans+=(y%x);
        k--;
        x++;
        y++;
    }
 
    if(k==0)
    {
        cout<<ans<<endl;
        return;
    }
 
    int temp=y%x;
    ans+=(temp*k);
 
 
    cout<<ans<<endl;
 
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