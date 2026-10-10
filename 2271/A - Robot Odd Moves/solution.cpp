#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b;
    cin>>a>>b;
    
 
   if(b>a)
   {
 
    if((b-a) ==1)
    {
        cout<<b<<endl;
        return;
    }
      cout<<-1<<endl;
      return;
   }
 
   if(b==a)
   {
    cout<<a<<endl;
    return;
   }
 
 if((a-b)%2==0)
 {
    cout<<a<<endl;
    return;
 }
 
 
 cout<<a+1<<endl;
 
  
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