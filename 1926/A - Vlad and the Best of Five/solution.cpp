#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >>s;
    int cnt1=0,cnt2=0;
    for(auto it:s)
    {
        if(it=='A') cnt1++;
 
        else cnt2++;
    }
 
    if(cnt1>cnt2) cout<<"A"<<endl;
    else cout<<"B"<<endl;
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