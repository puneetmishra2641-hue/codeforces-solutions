#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin >> n ;
    
    int ans=0;
    int curr=0;
 
    for(int i=0 ; i<n ; i++)
    {
        int temp;
        cin >> temp;
 
        if(temp==0)
        {
            curr++;
 
            ans=max(ans,curr);
        }
 
        if(temp!=0) curr=0;
    }
 
 
    cout<<ans<<endl;
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