#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
   
    int count=0;
    for(int i=0 ; i< n ; i++) 
    {
        int temp;
        cin >> temp;
 
        if(temp==1) count++;
    }
 
   if(n%2!=0)
   {
    cout<<"NO"<<endl;
    return;
   }
 
   if(((n/2)%2==0 && count%2==0) || ((n/2)%2!=0 && count%2!=0))
   {
    cout<<"YES"<<endl;
    return;
   }
 
   cout<<"NO"<<endl;
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