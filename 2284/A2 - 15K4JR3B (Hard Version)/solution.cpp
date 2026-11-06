#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
int power(int a, int b) {
    int res = 1;
   
    while (b > 0) {
        if (b & 1) res = (res * a);
        a = (a * a);
        b >>= 1;
    }
    return res;
}
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++) cin>>a[i];
 
    vector<int>po;
 
    for(int i=0 ; i<n ; i++)
    {
        po.push_back(power(2,a[i]));
    }
 
 
    
    sort(po.rbegin(),po.rend());
 
  int total1=0, total2=0;
 
    
    for(int i = 0; i < n; i++) {
        if(total1<= total2) {
            total1+= po[i];
        }
        else {
            total2 += po[i];
        }
    }
 
    cout <<total1*total2<<endl;
 
 
 
 
 
 
 
 
 
 
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