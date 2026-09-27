#include <bits/stdc++.h>
using namespace std;
 
int power(int a , int b)
{
    if(b==0) return 1;
    if(b==1) return a;
 
    if(b%2==0)
    {
      int x=power(a,b/2);
      return x*x;
    }
 
    int x=power(a,b/2);
    return x*x*a;
}
 
void solve() {
    int n ,k;
    cin >> n >> k ;
 
    int m=k-1;
 
    cout<<2*m+power(2,n-m)<<endl;
 
    
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