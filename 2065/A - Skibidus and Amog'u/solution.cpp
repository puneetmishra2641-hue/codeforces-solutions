#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;cin>>s;
    string a(s.begin(),s.end()-2);
    a+="i";
    cout<<a<<endl;
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