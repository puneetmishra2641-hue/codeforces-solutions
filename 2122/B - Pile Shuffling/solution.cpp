#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
     int n;
    cin >> n;
    
    int zg=0,og=0;
    int extra=0;
 
    for(int i=0 ; i< n ; i++)
    {
       int a,b,c,d;
       cin >> a >> b >>c >>d;
    
 
       if((a-c) >0)
       {
          zg+=(a-c);
 
       }
       
 
       if((b-d)>0)
       {
         og+=(b-d);
         extra+=min(a,c);
       }
       
 
      
 
    }
 
    cout<<zg+og+extra<<endl;
 
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