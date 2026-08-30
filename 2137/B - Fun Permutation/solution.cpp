#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    for(int i=0 ; i< n ; i++) 
    {
        int temp;
        cin >> temp;
        cout<<n-temp+1<<" ";
    }
    cout<<endl;
 
 
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