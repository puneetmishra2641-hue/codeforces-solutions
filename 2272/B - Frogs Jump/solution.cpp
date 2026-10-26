#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    string a,b;
    cin>>a>>b;
 
    int cnt=0;
    for(auto i:a)
    {
        if(i=='f') cnt++;
    }
 
    for(auto i:b)
      if(i=='f')  cnt++;
 
      if(cnt%2==0)
      {
        cout<<0<<endl;
        return;
      }
 
      cout<<1<<endl;
      
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