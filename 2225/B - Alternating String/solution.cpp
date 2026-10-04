#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin>>s;
    int count=0;
    int size=s.size();
    for(int i=0;i<size-1;i++)
    {
        if(s[i]==s[i+1]) count++;
    }
 
    if(count>2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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