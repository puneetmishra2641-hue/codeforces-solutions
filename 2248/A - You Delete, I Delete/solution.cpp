#include <bits/stdc++.h>
using namespace std;
 
void solve() {
  string s;cin >>s;
 
  int n =s.size();
 
  bool a=true,b=true;
  for(int i=0 ; i<n ; i++)
  {
    if(a && s[i]=='1')
    {
        a=false;
        continue;
    }
 
    if(b && s[i]=='0')
    {
        b=false;
        continue;
    }
 
    cout<<s[i];
  }
 
  cout<<endl;
  return;
 
 
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